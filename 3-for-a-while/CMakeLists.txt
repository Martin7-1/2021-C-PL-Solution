cmake_minimum_required(VERSION 3.20)
project(3_for_a_while)

set(CMAKE_CXX_STANDARD 14)

add_executable(josephus josephus.c)
add_executable(binary binary.c)
add_executable(series series.c)
add_executable(sudoku sudoku.c)
add_executable(insertion-sort insertion-sort.c)
add_executable(mines mines.c)
add_executable(palindrome palindrome.c)
add_executable(anotherMines anotherMines.c)
