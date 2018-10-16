cmake_minimum_required(VERSION 3.12)
project(CAlgorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(CAlgorithm c/test.c c++/Test.cpp c++/Test.h 排序/插入排序.c 排序/选择排序.c 图/邻接矩阵.c 图/邻接表.c 图/深度遍历.c 图/广度遍历.c)