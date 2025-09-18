CC=g++
CFLAGS= -g -Wall

horseGame: main.o
	$(CC) $(CFLAGS) main.o -o game

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o
	rm game

run: game
	./game
