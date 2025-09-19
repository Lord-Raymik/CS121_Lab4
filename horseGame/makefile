CC=g++
CFLAGS= -g -Wall

horseGame: horse.o race.o main.o
	$(CC) $(CFLAGS) horse.o race.o main.o -o horseGame

horse.o: horse.cpp horse.h
	$(CC) $(CFLAGS) -c horse.cpp

race.o: race.cpp race.h
	$(CC) $(CFLAGS) -c race.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o
	rm horseGame

run: horseGame
	./horseGame
