cmake_minimum_required(VERSION 3.0)
project(foo)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -std=c99")

add_executable(prog foo.c main.c)
