cmake_minimum_required(VERSION 3.6)
project(ode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp AbstractOdeSolver.cpp AbstractOdeSolver.h ForwardEulerSolver.cpp ForwardEulerSolver.h RungeKuttaSolver.cpp RungeKuttaSolver.h)
add_executable(ode ${SOURCE_FILES})