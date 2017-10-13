cmake_minimum_required(VERSION 3.8)
project(lab5)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c monster.c monster.h savings.c savings.h)
add_executable(lab5 ${SOURCE_FILES})