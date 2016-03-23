CC = g++
CFLAGS = -Wall -g
OBJECTS = main.o powerteam.o thing.o
EXECUTABLE = powerteam 

powerteam: $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJECTS)
main.o: main.cpp powerteam.o 
	$(CC) $(CFLAGS) -c main.cpp -o main.o
powerteam.o: powerteam.cpp powerteam.h
	$(CC) $(CFLAGS) -c powerteam.cpp -o powerteam.o
thing.o: thing.h thing.cpp
	$(CC) $(CFLAGS) -c thing.cpp -o thing.o
clean:
	rm $(OBJECTS) $(EXECUTABLE)
