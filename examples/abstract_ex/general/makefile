OBJECTS = main.o vt100.o
EXE=prog
CC=g++

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o:		main.cpp display.h vt100.h vt100.cpp
		$(CC) -c main.cpp
vt100.o:		display.h vt100.h vt100.cpp
		$(CC) -c vt100.cpp
clean:
		rm -rf $(OBJECTS) *~ $(EXE)
install:	$(EXE)
		rm -rf $(OBJECTS) *~
