#!/bin/bash
set -e

ROOT=$(cd "$(dirname "$0")/.." && pwd)
GLSLANG="$ROOT/out/glslang_host/StandAlone/glslangValidator"
SHADERS_DIR="$ROOT/app/src/me/native/shaders"
OUT_DIR="$ROOT/app/src/me/native"

mkdir -p "$OUT_DIR"

SHADERS=(
    sa2_edram_7e3_to_rgba8
    sa2_edram_rgba8_to_7e3
    sa2_edram_16f_to_16f
    me_resolve_exp_bias
    me_edram_depth_to_rgba8
    me_edram_depth_to_16f
    me_edram_import
    me_edram_color_to_depth
    me_edram_depth_to_depth
    me_edram_depth_to_stencil
    me_edram_color_to_stencil
    me_edram_depth_to_depth_msaa2
    me_edram_depth_msaa2_to_depth_1x
    me_edram_depth_to_stencil_msaa2
    me_edram_depth_msaa2_to_stencil_1x
    me_edram_raw64_to_rgba8
    me_edram_rgba8_to_raw64
    me_edram_raw64_to_16f
    me_edram_16f_to_raw64
    me_edram_raw64_to_raw64
    me_edram_depth_to_raw64
    me_edram_raw64_to_depth
    me_depth_resolve_guestspace
    me_depth_resolve_guestspace_msaa2
    me_edram_stencil_to_buffer
    me_edram_stencil_msaa2_to_buffer
    me_edram_color_stencil_to_buffer
    me_edram_color_to_color
    me_edram_r64_to_r64
    sa2_resolve_copy
    sa2_depth_resolve_ms
)

for shader in "${SHADERS[@]}"; do
    ext="comp"
    if [ "$shader" = "me_edram_import" ]; then
        ext="vert"
    elif [[ "$shader" =~ ^me_edram_(color_to_depth|depth_to_depth|depth_to_stencil|color_to_stencil|depth_to_depth_msaa2|depth_msaa2_to_depth_1x|depth_to_stencil_msaa2|depth_msaa2_to_stencil_1x|raw64_to_depth|color_to_color|r64_to_r64)$ ]] || [ "$shader" = "sa2_resolve_copy" ] || [ "$shader" = "sa2_depth_resolve_ms" ]; then
        ext="frag"
    fi

    source="$SHADERS_DIR/$shader.$ext"
    target_flags=""
    output="$OUT_DIR/$shader.inc"

    if [[ "$shader" =~ ^me_edram_(stencil_to_buffer|color_stencil_to_buffer|stencil_msaa2_to_buffer|depth_to_depth_msaa2|depth_msaa2_to_depth_1x|depth_to_stencil_msaa2|depth_msaa2_to_stencil_1x)$ ]] || [ "$shader" = "me_depth_resolve_guestspace_msaa2" ]; then
        target_flags="--target-env vulkan1.2"
        # Also copy as _generated.inc if needed
        cp_generated=1
    else
        cp_generated=0
    fi

    if [ -f "$source" ]; then
        echo "Compiling $shader.$ext -> $shader.inc"
        "$GLSLANG" -V $target_flags -x -o "$output" "$source"
        if [ "$cp_generated" -eq 1 ]; then
            cp "$output" "$OUT_DIR/${shader}_generated.inc"
        fi
    else
        echo "Warning: $source not found!"
    fi
done

echo "All EDRAM shaders generated successfully in $OUT_DIR!"
