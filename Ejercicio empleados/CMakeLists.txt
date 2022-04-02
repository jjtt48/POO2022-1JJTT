cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Employee.cpp Employee.h SalariedEmployee.h SalariedEmployee.cpp HourlyEmployee.h HourlyEmployee.cpp CommissionEmployee.h CommissionEmployee.cpp BasePlusCommisionEmployee.h BasePlusCommisionEmployee.cpp)
