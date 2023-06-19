#include <cassert>
#include <iostream>
#include <boost/config.hpp>

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graphviz.hpp>

//Boost.Graph
auto f() noexcept
{
  boost::adjacency_list<> g;
  boost::add_vertex(g);
  return boost::num_vertices(g);
}

int main()
{
  static_assert("C++17"); //C++17 has a default message

  #ifndef __GNUC__
  #error This example assumes GCC
  #endif

  #ifdef __clang__
  #error No clang in this example please
  #endif

  assert(f() == 1);

  // Show compiler and version
  std::cout << "Compiler: " << BOOST_COMPILER << '\n';
}
