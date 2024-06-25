cmake_minimum_required(VERSION 3.28)
project(C_learning C)

set(CMAKE_C_STANDARD 90)

add_executable(HelloWord src/HelloWord.c)
add_executable(comment src/syntax/comment.c)
add_executable(function src/syntax/function.c)
add_executable(data_type src/syntax/data_type.c)
