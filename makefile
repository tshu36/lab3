main:pj3.o pj3.cpp main.cpp
	g++ -c pj3.cpp -o pj3.o
	g++ -o pj3 main.cpp pj3.o
