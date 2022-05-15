cmake_minimum_required(VERSION 3.21)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR ARM)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

project(IRKos C ASM)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)

include(scripts/cmake/CreateVirtualEnvironment.cmake)

CreateVirtualEnvironment(venv
        REQUIREMENTS_TXT ${CMAKE_SOURCE_DIR}/scripts/python/requirements.txt
        OUT_PYTHON_EXE PYTHON_EXE)

add_custom_command(OUTPUT
        ${CMAKE_SOURCE_DIR}/include/jumptable/irk_jumptable_api.h
        ${CMAKE_SOURCE_DIR}/include/jumptable/irk_jumptable_boot.h
        ${CMAKE_SOURCE_DIR}/linker/irk_jumptable.ld
        ${CMAKE_SOURCE_DIR}/src/jumptable/irk_jumptable_api.c
        ${CMAKE_SOURCE_DIR}/src/jumptable/irk_jumptable_boot.c
        COMMAND ${PYTHON_EXE} ${CMAKE_SOURCE_DIR}/scripts/python/gen_jumptable.py
        DEPENDS venv
        DEPENDS ${CMAKE_SOURCE_DIR}/scripts/python/gen_jumptable.py
        DEPENDS ${CMAKE_SOURCE_DIR}/jumptable.yaml)

include_directories(include)

add_library(v5rts
        src/jumptable/irk_jumptable_api.c
        src/sdk/irk_private.c
        src/sdk/v5_api.c)

target_include_directories(v5rts INTERFACE include)
target_compile_options(v5rts INTERFACE
        -Os
        -ggdb
        -mcpu=cortex-a9
        -mfpu=neon-fp16
        -mfloat-abi=softfp
        -fno-tree-loop-distribute-patterns)

add_executable(bootloader.elf
        src/irk_boot.c
        src/irk_jumptable.c
        src/irk_vectors.S
        src/jumptable/irk_jumptable_boot.c)

target_include_directories(bootloader.elf PUBLIC include)
target_compile_options(bootloader.elf PUBLIC --specs=rdimon.specs -nostartfiles -nostdlib)
target_link_libraries(bootloader.elf PUBLIC v5rts c)
target_link_directories(bootloader.elf PUBLIC ${CMAKE_SOURCE_DIR}/linker)
target_link_options(bootloader.elf PUBLIC --specs=rdimon.specs -nostartfiles "LINKER:-T${CMAKE_SOURCE_DIR}/linker/irk_boot.ld")