cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(Robot)

include_directories(include)

add_executable(tool
    main.cpp
    Robot.cpp
    Maze.cpp
)