CXX = g++
OPT = -g -O2 -std=c++23

main: main.cpp
	${CXX} ${OPT} $^ -o $@
