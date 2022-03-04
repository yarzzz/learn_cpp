cmake_minimum_required(VERSION 3.1.0)

project(learn_cmdline VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

# add_subdirectory(src)

aux_source_directory(./src SRC_LIST)

file(GLOB HEADERS "*.h")

add_executable(
    ${PROJECT_NAME}
    ${SRC_LIST}
    ${HEADERS}
)