cmake_minimum_required(VERSION 3.31)
project(PasswortGenerator)

set(CMAKE_CXX_STANDARD 26)

add_executable(PasswortGenerator main.cpp
        UI.cpp
        UI.h
)
