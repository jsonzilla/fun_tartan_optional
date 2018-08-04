cmake_minimum_required (VERSION 3.1)
project (tl_optional)

set(CMAKE_CXX_STANDARD 14)

add_executable(tl_optional main.cpp)

target_include_directories(
    tl_optional
    PRIVATE
    "../tartan_optional/tl"
    )   

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
