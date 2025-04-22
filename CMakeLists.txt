cmake_minimum_required(VERSION 3.31)
project(9_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(9_3 main.cpp
        calc.cpp
        io.cpp
        main.h
        calc.h
        io.h
        global.h)
