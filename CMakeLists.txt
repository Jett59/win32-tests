cmake_minimum_required(VERSION 3.12)

#Project
project(win32-test)

#C++ 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Include directory
set(CMAKE_CXX_FLAGS 
"-I \"${PROJECT_SOURCE_DIR}/include\""
)

add_subdirectory(src)
