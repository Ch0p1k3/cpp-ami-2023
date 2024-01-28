CC=clang++
CXXFLAGS=-O3 --std=c++20
EXTRA_CXXFLAGS=

all: alignof struct

alignof:
	$(CC) $(CXXFLAGS) $(EXTRA_CXXFLAGS) alignof.cpp -o alignof && ./alignof && rm -rf alignof

struct:
	$(CC) $(CXXFLAGS) $(EXTRA_CXXFLAGS) struct.cpp -o struct && ./struct && rm -rf struct
