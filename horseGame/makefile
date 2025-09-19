CC=g++
CFLAGS= -g -Wall

horseGame: horse.o main.o
	$(CC) $(CFLAGS) horse.o main.o -o horseGame

horse.o: horse.cpp horse.o
	$(CC) $(CFLAGS) -c horse.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o
	rm horseGame

run: horseGame
	./horseGame
