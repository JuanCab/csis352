CC=g++
CFLAGS=
LFLAGS=
EXE = prog
OBJECTS=main.o circle.o coloredcircle.o colors.o

$(EXE): $(OBJECTS)
		$(CC) -o prog $(OBJECTS) $(LFLAGS)

main.o: main.cpp circle.o coloredcircle.o
		$(CC) $(CFLAGS) -c main.cpp

circle.o: circle.cpp
		$(CC) $(CFLAGS) -c circle.cpp

colors.o: colors.cpp
		$(CC) $(CFLAGS) -c colors.cpp

coloredcircle.o: coloredcircle.cpp
		$(CC) $(CFLAGS) -c coloredcircle.cpp

install: $(EXE)
		rm -rf $(OBJECTS) *~

clean:
		rm -rf $(OBJECTS) *~ $(EXE)
