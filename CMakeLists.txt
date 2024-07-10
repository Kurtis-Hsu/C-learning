cmake_minimum_required(VERSION 3.28)
project(C_learning C)

set(CMAKE_C_STANDARD 90)

add_executable(HelloWord src/HelloWord.c)
add_executable(comment src/syntax/comment.c)
add_executable(function src/syntax/function.c)
add_executable(console src/io/console.c)
add_executable(operation src/syntax/operation.c)
add_executable(data_primitive src/syntax/data/primitive.c)
add_executable(control src/syntax/control.c)
add_executable(redirectIO src/io/redirectIO.c)