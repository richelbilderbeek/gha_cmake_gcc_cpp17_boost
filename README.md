# gha_cmake_gcc_cpp17_boost

Branch   |[![GitHub Actions logo](pics/GitHubActions.png)](https://github.com/richelbilderbeek/gha_cmake_gcc_cpp17_boost/actions)
---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
`master` |[![Check build](https://github.com/richelbilderbeek/gha_cmake_gcc_cpp17_boost/actions/workflows/check_build.yml/badge.svg?branch=master)](https://github.com/richelbilderbeek/gha_cmake_gcc_cpp17_boost/actions/workflows/check_build.yml)
`develop`|[![Check build](https://github.com/richelbilderbeek/gha_cmake_gcc_cpp17_boost/actions/workflows/check_build.yml/badge.svg?branch=develop)](https://github.com/richelbilderbeek/gha_cmake_gcc_cpp17_boost/actions/workflows/check_build.yml)

The goal of this project is to have a clean GitHub Actions build, with specs:

 * Build system: `CMake`
 * C++ compiler: `g++`
 * C++ version: `C++17`
 * Libraries: `STL` and Boost
 * Code coverage: none
 * Profiling: none
 * Source: one single file, `main.cpp`

More complex builds:

 * [none]

Equally complex builds:

 * Use the `qmake` (instead of`CMake`) build system: [gha_qmake_gcc_cpp17_boost](https://github.com/richelbilderbeek/gha_qmake_gcc_cpp17_boost)

Less complex builds:

 * No Boost C++ libraries: [gha_cmake_gcc_cpp17](https://github.com/richelbilderbeek/gha_cmake_gcc_cpp17)
 * No `CMake`: [gha_gcc_cpp17_boost](https://github.com/richelbilderbeek/gha_gcc_cpp17_boost)
 