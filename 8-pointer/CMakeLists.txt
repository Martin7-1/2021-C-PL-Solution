cmake_minimum_required(VERSION 3.20)
project(8_pointer C)

set(CMAKE_C_STANDARD 99)

add_executable(split split.c)
add_executable(substr substr.c)
add_executable(interpreter interpreter.c)
add_executable(title title.c)
