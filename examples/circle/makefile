# File:     makefile

# Description
# This makefile will make the example program of a circle class

CC=g++
OBJECTS=main.o circle.o
EXE=circle
CFLAGS=-fno-diagnostics-color -Wall
LFLAGS=

$(EXE):		$(OBJECTS)
				$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o: 		main.cpp circle.h
				$(CC) $(CFLAGS) -c main.cpp
circle.o:	circle.cpp circle.h
				$(CC) $(CFLAGS) -c circle.cpp
clean:
				rm -rf $(EXE) *~ $(OBJECTS) $(EXE)

