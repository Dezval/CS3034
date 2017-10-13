cmake_minimum_required(VERSION 3.8)
project(Excersie4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp StockPrice.cpp StockPrice.h StockDataStorage.cpp StockDataStorage.h)
add_executable(Excersie4 ${SOURCE_FILES})