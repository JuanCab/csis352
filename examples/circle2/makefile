# File:     makefile
# Author:   Dan Brekke

# Description
# This makefile will make the example program of a circle class

CC=g++
OBJECTS=main.o circle.o
OBJECTS_TEMPLATE = main_template.o circle_template.o
EXE=circle
EXE_TEMPLATE = circle_template
CFLAGS=-fno-diagnostics-color -Wall
LFLAGS=

$(EXE):		$(OBJECTS)
			$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
			rm -rf $(OBJECTS)
$(EXE_TEMPLATE):		$(OBJECTS_TEMPLATE)
			$(CC) $(CFLAGS) -o $(EXE_TEMPLATE) $(OBJECTS_TEMPLATE) $(LFLAGS)
			rm -rf $(OBJECTS_TEMPLATE)
main.o: 		main.cpp circle.h
			$(CC) $(CFLAGS) -c main.cpp
circle.o:	circle.cpp circle.h
			$(CC) $(CFLAGS) -c circle.cpp
main_template.o: 		main_template.cpp circle_template.h
			$(CC) $(CFLAGS) -c main_template.cpp
circle_template.o:	circle_template.cpp circle_template.h
			$(CC) $(CFLAGS) -c circle_template.cpp
clean:
			rm -rf $(OBJECTS) $(OBJECTS_TEMPLATE) $(EXE) $(EXE_TEMPLATE)

