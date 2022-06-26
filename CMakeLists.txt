cmake_minimum_required(VERSION 3.20)
project(car_park)

set(CMAKE_CXX_STANDARD 14)

add_executable(car_park main.cpp coffeeMachine.cpp coffeeMachine.h Cup.cpp Cup.h coffeeCup.cpp coffeeCup.h)
