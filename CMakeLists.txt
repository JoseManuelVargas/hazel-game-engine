cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

project(GameEngine VERSION 1.0)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(${PROJECT_NAME} Main.cpp)

add_subdirectory(vendor)
add_subdirectory(Hazel)
add_subdirectory(Sandbox)
