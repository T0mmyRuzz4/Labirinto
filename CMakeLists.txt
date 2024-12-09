cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(Labirinto)

include_directories(include, src)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_EXTENSIONS false)

add_library(Maze
    include/Maze.h
    src/Maze.cpp
)

add_library(Robot
    include/Robot.h
    src/Robot.cpp
)

add_library(RandomRobot
    include/RandomRobot.h
    src/RandomRobot.cpp
)

add_library(RightHandRuleRobot
    include/RightHandRuleRobot.h
    src/RightHandRuleRobot.cpp
)

add_executable(main
    main.cpp
)

target_link_libraries(main
    Maze
    Robot
    RandomRobot
    RightHandRuleRobot
)