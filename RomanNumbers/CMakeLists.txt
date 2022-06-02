cmake_minimum_required(VERSION 3.22)

project(RomanHelper)

set (C_MAKE_CXX_FLAGS "${C_MAKE_CXX_FLAGS} -std =c++1y")

set (C_MAKE_CXX_FLAGS "${C_MAKE_CXX_FLAGS} -Wall"})

file (GLOB CPPS "*.cpp")

add_executable (${PROJECT_NAME} ${CPPS})