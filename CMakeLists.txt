cmake_minimum_required(VERSION 3.21)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

project(drawmki
    LANGUAGES C CXX
    VERSION 1.0.0
)

find_package(glfw3 REQUIRED)

add_subdirectory(src)
