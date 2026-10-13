#!/usr/bin/env python3
import concurrent.futures as cf
import os
import subprocess
import sys
import time

DXC = "/home/mark/tools/bin/dxc"

def compile_one(f_tuple):
    src, out_dir = f_tuple
    basename = os.path.basename(src)[:-5]
    out_spv = os.path.join(out_dir, f"{basename}.spv")
    out_err = os.path.join(out_dir, f"{basename}.err")

    if os.path.exists(out_spv) and os.path.getsize(out_spv) > 0:
        return basename, True

    is_ps = basename.startswith("ps_")
    stage = "ps_6_6" if is_ps else "vs_6_6"
    cmd = [
        DXC,
        "-spirv",
        "-T", stage,
        "-E", "main",
        "-HV", "2021",
        "-fspv-target-env=vulkan1.2",
        "-fvk-use-dx-layout",
        "-Werror=parameter-usage"
    ]
    if not is_ps:
        cmd.append("-fvk-invert-y")
    cmd.extend(["-Fo", out_spv, src])

    res = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if res.returncode == 0 and os.path.exists(out_spv):
        if os.path.exists(out_err):
            os.remove(out_err)
        return basename, True
    else:
        if os.path.exists(out_spv):
            os.remove(out_spv)
        with open(out_err, "w") as ef:
            ef.write(res.stderr)
        return basename, False

def main():
    if len(sys.argv) < 3:
        print("Usage: compile_all_dxc.py <hlsl_dir> <spirv_dir>")
        sys.exit(1)

    hlsl_dir = sys.argv[1]
    spirv_dir = sys.argv[2]
    os.makedirs(spirv_dir, exist_ok=True)

    files = [os.path.join(hlsl_dir, f) for f in os.listdir(hlsl_dir) if f.endswith(".hlsl")]
    total = len(files)
    print(f"Compiling {total} HLSL shaders with DXC across 4 cores...")

    start = time.time()
    succeeded = 0
    failed = 0
    items = [(f, spirv_dir) for f in files]

    with cf.ProcessPoolExecutor(max_workers=4) as executor:
        for idx, (name, ok) in enumerate(executor.map(compile_one, items, chunksize=16)):
            if ok:
                succeeded += 1
            else:
                failed += 1
            if (idx + 1) % 500 == 0 or (idx + 1) == total:
                elapsed = time.time() - start
                print(f"[{idx+1}/{total}] Succeeded: {succeeded}, Failed: {failed} ({elapsed:.1f}s)")

    print(f"Done in {time.time() - start:.1f}s! Total Succeeded: {succeeded}, Failed: {failed}")

if __name__ == "__main__":
    main()
