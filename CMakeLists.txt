cmake_minimum_required(VERSION 3.10)
project(rtb_engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(rtb_simulator
experiments/main.cpp
src/simulator/Simulator.cpp
src/simulator/Budget.cpp
src/simulator/Auction.cpp
)