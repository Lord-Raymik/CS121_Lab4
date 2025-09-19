#include <iostream>

//the header file
#include "horse.h"


Horse::Horse() {
	Horse::horseNumber = 0;
	Horse::position = 0;
	Horse::TRACK_LENGTH = 0;
}

void Horse::init(int number, int trackLength) {
	Horse::horseNumber = number;
	Horse::TRACK_LENGTH = trackLength;
}

void Horse::advance() {
	int random = rand() % 2;
	Horse::position += random;
}

void Horse::printLane() {
	for (int i = 0; i < Horse::TRACK_LENGTH; i++) {
		if (i == Horse::position) {
			std::cout << Horse::horseNumber;
		} else {
			std::cout << "*";
		}
	}
	std::cout << std::endl;
}

bool Horse::isWinner() {
	if (Horse::position >= Horse::TRACK_LENGTH) {
		std::cout << "HORSE " << Horse::horseNumber << " WINS!" << std::endl;
		return true;
	} else {
		return false;
	}
}
