cmake_minimum_required(VERSION 3.25)
project(gh3 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(REXSDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../sdk" CACHE PATH "Path to the ReXGlue SDK source tree")
add_subdirectory("${REXSDK_DIR}" rexglue-sdk)

include("${CMAKE_CURRENT_SOURCE_DIR}/generated/sources.cmake")

set(ME_SOURCES
    src/me/me_native_system.cpp
    src/me/me_ring_wait.cpp
    src/me/me_renderdoc.cpp
    src/me/gh3_me_glue.cpp
    src/me/native/sa2_native_draws.cpp
    src/me/native/sa2_deferred_recording.cpp
    src/me/native/sa2_native_targets.cpp
    src/me/native/sa2_native_shaders.cpp
    src/me/native/sa2_native_textures_pool.cpp
    src/me/native/sa2_shader_library.cpp
    src/me/native/sa2_native_glue.cpp
    src/me/sa2_render_mode.cpp
    src/cpu/sa2_enhancements.cpp
    src/cpu/sa2_gpu_boost.cpp
    src/sa2_pgo.cpp
    ${REXSDK_DIR}/src/graphics/register_file.cpp
    ${REXSDK_DIR}/src/graphics/format/ucode.cpp
    ${REXSDK_DIR}/src/graphics/pipeline/shader/interpreter.cpp
)

if(NOT REXGLUE_PLATFORM_SWITCH)
    list(APPEND ME_SOURCES src/me/me_pc_stubs.cpp)
endif()

add_executable(gh3
    src/main.cpp
    ${GENERATED_SOURCES}
    ${ME_SOURCES}
)

target_include_directories(gh3 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/me
    ${CMAKE_CURRENT_SOURCE_DIR}/src/me/native
    ${CMAKE_CURRENT_SOURCE_DIR}/generated
    ${REXSDK_DIR}/thirdparty/xxHash
    ${REXSDK_DIR}/thirdparty/fmt/include
    ${REXSDK_DIR}/src
    ${REXSDK_DIR}/src/core
)

target_compile_definitions(gh3 PRIVATE
    XXH_INLINE_ALL
    FMT_HEADER_ONLY
)

target_link_libraries(gh3 PRIVATE
    rex::runtime
    rex::ui
)

set_source_files_properties(
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/gh3_register.cpp"
    PROPERTIES COMPILE_OPTIONS "-O1"
)

rexglue_configure_target(gh3 GPU_PLUGINS xenos)

if(REXGLUE_PLATFORM_SWITCH)
    if(NOT GH3_PGO AND SA2_PGO)
        set(GH3_PGO "${SA2_PGO}")
    endif()
    set(GH3_PGO "" CACHE STRING "Profile-guided optimisation of the Switch build: empty, generate or use")
    set_property(CACHE GH3_PGO PROPERTY STRINGS "" generate use)
    set(GH3_PGO_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../pgo" CACHE PATH "Folder of the PGO profile (.gcda files)")
    get_filename_component(_gh3_pgo_dir "${GH3_PGO_DIR}" ABSOLUTE)
    file(TO_NATIVE_PATH "${_gh3_pgo_dir}" _gh3_pgo_dir)
    file(TO_NATIVE_PATH "${CMAKE_BINARY_DIR}" _gh3_pgo_prefix)
    if(GH3_PGO STREQUAL "generate")
        set(_gh3_pgo "-fprofile-generate=${_gh3_pgo_dir}" "-fprofile-prefix-path=${_gh3_pgo_prefix}"
                     -fno-profile-values -fprofile-update=single -fprofile-info-section=gcov_info)
        target_compile_definitions(gh3 PRIVATE SA2_PGO_GENERATE=1)
    elseif(GH3_PGO STREQUAL "use")
        if(NOT EXISTS "${GH3_PGO_DIR}")
            message(FATAL_ERROR "GH3_PGO=use: no profile in ${GH3_PGO_DIR}")
        endif()
        set(_gh3_pgo "-fprofile-use=${_gh3_pgo_dir}" "-fprofile-prefix-path=${_gh3_pgo_prefix}" -fprofile-correction
                     -fno-profile-values -fprofile-partial-training -Wno-missing-profile -Wno-coverage-mismatch)
    elseif(GH3_PGO)
        message(FATAL_ERROR "GH3_PGO must be empty, generate or use (got ${GH3_PGO})")
    endif()
    if(GH3_PGO)
        target_compile_options(gh3 PRIVATE ${_gh3_pgo})
        target_link_options(gh3 PRIVATE ${_gh3_pgo})
        message(STATUS "gh3: PGO ${GH3_PGO}")
    endif()

    rexglue_switch_add_nro(gh3
        NAME "Guitar Hero III: Legends of Rock"
        AUTHOR "markaurel13"
        VERSION "1.0.0"
        ICON "${CMAKE_CURRENT_SOURCE_DIR}/icon.jpg"
    )
endif()
