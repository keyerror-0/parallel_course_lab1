cmake_minimum_required (VERSION 3.10)
project(app)

if(U_FLOAT)
    add_definitions(-DUSE_FLOAT)
endif()

add_executable(app main.cpp)