cmake_minimum_required(VERSION 3.30)
project(banka)

set(CMAKE_CXX_STANDARD 20)

add_executable(banka main.cpp
        bank.h
        bank.cpp
        user.h
        user.cpp)
