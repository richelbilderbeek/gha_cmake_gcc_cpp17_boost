SOURCES += main.cpp

# C++17
CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# High warning levels
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic

# Use Graphviz
LIBS += -lboost_graph