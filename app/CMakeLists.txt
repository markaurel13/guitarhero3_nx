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
    rexglue_switch_add_nro(gh3
        NAME "Guitar Hero III: Legends of Rock"
        AUTHOR "markaurel13, Neversoft"
        VERSION "1.0.0"
        ICON "${CMAKE_CURRENT_SOURCE_DIR}/icon.jpg"
    )
endif()
