CC=g++
CFLAGS=
OBJECTS=circle.o shape.o main.o rectangle.o square.o
EXE=prog

$(EXE): $(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS)

main.o: main.cpp circle.o shape.o rectangle.o square.o
		$(CC) $(CFLAGS) -c main.cpp

circle.o: circle.cpp shape.cpp
		$(CC) $(CFLAGS) -c circle.cpp

rectangle.o: rectangle.cpp shape.cpp
		$(CC) $(CFLAGS) -c rectangle.cpp

square.o: square.cpp rectangle.cpp
		$(CC) $(CFLAGS) -c square.cpp

shape.o: shape.cpp
		$(CC) $(CFLAGS) -c shape.cpp

clean:
		rm -rf $(EXE) $(OBJECTS) *~

install: $(EXE)
		rm -rf $(OBJECTS) *~
