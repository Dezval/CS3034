cmake_minimum_required(VERSION 3.8)
project(Lab6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Employee.cpp Employee.h Paycheck.cpp Paycheck.h PayrollSystem.cpp PayrollSystem.h)
add_executable(Lab6 ${SOURCE_FILES})