cmake_minimum_required(VERSION 3.10)

project(gha_cmake_gcc_cpp17_boost)

set(CMAKE_CXX_STANDARD 17)

add_executable(gha_cmake_gcc_cpp17_boost main.cpp)

# Boost, from https://cmake.org/cmake/help/git-master/module/FindBoost.html
find_package(Boost 1.56 REQUIRED COMPONENTS graph)
target_link_libraries(gha_cmake_gcc_cpp17_boost Boost::graph)
