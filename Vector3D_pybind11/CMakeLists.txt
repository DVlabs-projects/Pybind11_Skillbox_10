cmake_minimum_required(VERSION 3.15)
project(
    vectorlib
    VERSION 1.0.0
    DESCRIPTION "Pybind11 Vector3D"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Python COMPONENTS Interpreter Development REQUIRED)

include_directories(include)
add_subdirectory(Libs/pybind11)

pybind11_add_module(vectorlib src/bindings.cpp src/vector_operations.cpp)
