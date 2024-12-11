cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

# Nome e linguaggio del progetto
project (Labirinto LANGUAGES CXX)

# Opzioni generali
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Directory di inclusione
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

# Maze Library
add_library(Maze
    ${INCLUDE_DIR}/Maze.h
    ${SRC_DIR}/Maze.cpp
)
target_include_directories(Maze PUBLIC ${INCLUDE_DIR})

# Robot Library
add_library(Robot
    ${INCLUDE_DIR}/Robot.h
    ${SRC_DIR}/Robot.cpp
)
target_include_directories(Robot PUBLIC ${INCLUDE_DIR})

# RandomRobot Library
add_library(RandomRobot
    ${INCLUDE_DIR}/RandomRobot.h
    ${SRC_DIR}/RandomRobot.cpp
)
target_include_directories(RandomRobot PUBLIC ${INCLUDE_DIR})

# RightHandRuleRobot Library
add_library(RightHandRuleRobot
    ${INCLUDE_DIR}/RightHandRuleRobot.h
    ${SRC_DIR}/RightHandRuleRobot.cpp
)
target_include_directories(RightHandRuleRobot PUBLIC ${INCLUDE_DIR})

# Eseguibile principale
add_executable(main ${CMAKE_SOURCE_DIR}/main.cpp)

# Collegamento delle librerie all'eseguibile
target_link_libraries(main
    Maze
    Robot
    RandomRobot
    RightHandRuleRobot
)
