# the compiler: gcc for C program, define as g++ for C++
CC = g++
 
	# compiler flags:
	#  -g     - this flag adds debugging information to the executable file
	#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall
 
	# The build target 
TARGET = list
 
list.o: list.cpp
	$(CC) $(CFLAGS) -c -o list.o list.cpp
 
main: main.cpp list.o
	$(CC) $(CFLAGS) -o main.exe main.cpp list.o
all: main
clean:
	rm *.exe *.o