cmake_minimum_required(VERSION 3.29)
project(lab2 C)

set(CMAKE_C_STANDARD 11)

add_library(lab2 SHARED library.c
        main.c
)
