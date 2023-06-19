#include <cassert>
#include <iostream>
#include <boost/config.hpp>

int main()
{
  #ifndef NDEBUG
  #error Do not profile in debug mode
  #endif
  assert(!"Do not profile in debug mode");
  static_assert("C++17");

  #ifndef __GNUC__
  #error This example assumes GCC
  #endif

  #ifdef __clang__
  #error No clang in this example please
  #endif

  // Show compiler and version
  std::cout << "Compiler: " << BOOST_COMPILER << '\n';
}

