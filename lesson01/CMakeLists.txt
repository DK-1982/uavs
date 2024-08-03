cmake_minimum_required(VERSION 3.16)
project(
    lesson01
    VERSION 0.1
    DESCRIPTION "First project"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lesson01)

set(sources
    main.cpp
)

target_sources(lesson01 PRIVATE ${sources})
