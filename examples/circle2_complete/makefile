# File:     makefile
# Author:   Dan Brekke

# Description
# This makefile will make the example program of a circle class

CC=g++
OBJECTS=main.o circle.o
OBJECTS_INIT = main_initial.o circle_initial.o
EXE=circle
EXE_INIT = circle_initial
CFLAGS=-fno-diagnostics-color -Wall
LFLAGS=

$(EXE):		$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
			rm -rf $(OBJECTS)
$(EXE_INIT):		$(OBJECTS_INIT)
			$(CC) $(CFLAGS) -o $(EXE_INIT) $(OBJECTS_INIT) $(LFLAGS)
			rm -rf $(OBJECTS_INIT)
main.o: 		main.cpp circle.h
			$(CC) $(CFLAGS) -c main.cpp
circle.o:	circle.cpp circle.h
			$(CC) $(CFLAGS) -c circle.cpp
main_initial.o: 		main_initial.cpp circle_initial.h
			$(CC) $(CFLAGS) -c main_initial.cpp
circle_initial.o:	circle_initial.cpp circle_initial.h
			$(CC) $(CFLAGS) -c circle_initial.cpp
clean:
			rm -rf $(OBJECTS) $(OBJECTS_INIT) $(EXE) $(EXE_INIT)

