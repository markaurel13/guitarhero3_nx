#!/usr/bin/env python3
"""Profile-guided optimisation, step 2 of 3.
Merges gh3_pgo_*.stream files collected on the Switch into the profile directory (pgo/),
runs gcov-tool merge-stream, and invokes pgo_summary.py.

Usage:
  python3 tools/pgo_merge.py <folder_with_stream_files> [--out <pgo_profile_dir>]
"""

import os
import sys
import shutil
import subprocess
from pathlib import Path

def main():
    if len(sys.argv) < 2:
        print("Usage: python3 tools/pgo_merge.py <folder_with_stream_files> [--out <pgo_profile_dir>]")
        sys.exit(1)

    streams_dir = Path(sys.argv[1]).resolve()
    root_dir = Path(__file__).resolve().parent.parent
    build_dir = root_dir / "out" / "nx"
    out_dir = root_dir / "pgo"

    if "--out" in sys.argv:
        idx = sys.argv.index("--out")
        if idx + 1 < len(sys.argv):
            out_dir = Path(sys.argv[idx + 1]).resolve()

    gcov_tool = Path("/opt/devkitpro/devkitA64/bin/aarch64-none-elf-gcov-tool")
    if not gcov_tool.exists():
        # Check in PATH
        which_tool = shutil.which("aarch64-none-elf-gcov-tool")
        if which_tool:
            gcov_tool = Path(which_tool)
        else:
            print(f"Error: gcov-tool not found at {gcov_tool}")
            sys.exit(1)

    stream_files = sorted(list(streams_dir.glob("*_pgo_*.stream")) + list(streams_dir.glob("*.stream")))
    if not stream_files:
        print(f"Error: No .stream files found in {streams_dir}")
        sys.exit(1)

    out_dir.mkdir(parents=True, exist_ok=True)

    # Check if there are already gcda files
    existing_gcda = list(out_dir.glob("*.gcda"))
    if existing_gcda:
        print(f"Warning: {out_dir} already has {len(existing_gcda)} .gcda files. Move them aside if merging fresh streams.")

    print(f"Using gcov-tool: {gcov_tool}")
    print(f"Output folder: {out_dir}")

    for stream in stream_files:
        size_mb = stream.stat().st_size / (1024 * 1024)
        print(f"Merging {stream.name} ({size_mb:.1f} MB)...")
        res = subprocess.run([str(gcov_tool), "merge-stream", str(stream)], cwd=str(root_dir))
        if res.returncode != 0:
            print(f"Error: merge-stream failed for {stream}")
            sys.exit(res.returncode)

    # If gcda files were written into build_dir, move them into out_dir with '#' replacements
    if build_dir.exists():
        moved = 0
        for gcda in build_dir.rglob("*.gcda"):
            rel = gcda.relative_to(build_dir)
            target_name = str(rel).replace("/", "#").replace("\\", "#")
            target_path = out_dir / target_name
            shutil.move(str(gcda), str(target_path))
            moved += 1
        if moved > 0:
            print(f"{moved} file(s) moved from out/nx to {out_dir}")

    gcda_count = len(list(out_dir.glob("*.gcda")))
    if gcda_count == 0:
        print("Error: No .gcda files produced. Check paths or compilation options.")
        sys.exit(1)

    # Run pgo_summary.py
    summary_script = root_dir / "tools" / "pgo_summary.py"
    if summary_script.exists():
        print(f"Running pgo_summary.py on {out_dir} for {len(stream_files)} session(s)...")
        subprocess.run([sys.executable, str(summary_script), str(out_dir), str(len(stream_files))], check=True)

    print(f"\nSUCCESS: {len(stream_files)} session(s) merged into {gcda_count} profile file(s) in {out_dir}!")
    print("Now compile the release build with: ninja -C out/nx gh3 (configured with -DGH3_PGO=use)")

if __name__ == "__main__":
    main()
