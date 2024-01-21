CC=clang++
CXXFLAGS=-O3 --std=c++20

all: sizeof cinttypes char

sizeof:
	$(CC) $(CXXFLAGS) sizeof.cpp -o sizeof && ./sizeof && rm -rf sizeof

cinttypes:
	$(CC) $(CXXFLAGS) cinttypes.cpp -o cinttypes && ./cinttypes && rm -rf cinttypes

char:
	$(CC) $(CXXFLAGS) char.cpp -o char && ./char && rm -rf char
