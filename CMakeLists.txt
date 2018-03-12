cmake_minimum_required(VERSION 2.8)

project(Hello_World)
set(SRC main.cpp MyClass.cpp MyClass.h)
add_executable(${PROJECT_NAME} ${SRC})
