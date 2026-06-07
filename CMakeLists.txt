cmake_minimum_required(VERSION 3.20)

project(DSEngine)

set(CMAKE_CXX_STANDARD 17)

find_package(raylib REQUIRED)

add_executable(DSEngine
    src/main.cpp
    src/Application.cpp
)

target_link_libraries(DSEngine PRIVATE raylib)