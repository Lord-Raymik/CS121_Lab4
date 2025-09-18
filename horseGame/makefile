CC=g++
CFLAGS= -g -Wall
game: main.o
	$(CC) $(CFLAGS) main.o -o game

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o
	rm game

run: game
	./game
