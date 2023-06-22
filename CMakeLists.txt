cmake_minimum_required(VERSION 3.10)

project(gha_cmake_gcc_cpp17_boost)

set(CMAKE_CXX_STANDARD 17)

# From https://cliutils.gitlab.io/modern-cmake/chapters/packages/Boost.html
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost 1.50 REQUIRED COMPONENTS graph)

add_executable(gha_cmake_gcc_cpp17_boost main.cpp)

target_link_libraries(gha_cmake_gcc_cpp17_boost PUBLIC Boost::graph)

