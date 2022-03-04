cmake_minimum_required(VERSION 3.2)

project(learn_signal VERSION 1.0)

set(SOURCES cal.cpp)
set(HEADERS cal.h signal.h)

add_executable(
    ${PROJECT_NAME}
    main.cpp
    ${SOURCES}
)