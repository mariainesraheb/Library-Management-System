cmake_minimum_required(VERSION 3.5)

project(LibraryManagementSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(LibraryManagementSystem
    main.cpp
    mainwindow.cpp
    mainwindow.h
)

target_link_libraries(LibraryManagementSystem PRIVATE Qt6::Widgets)
