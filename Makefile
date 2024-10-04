all: build

build:
	g++ -c mh_p1.cpp
	g++ -c main.cpp
	g++ mh_p1.o main.o -o mh_p1
	./mh_p1.exe