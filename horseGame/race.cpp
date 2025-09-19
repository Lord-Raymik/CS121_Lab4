#include <iostream>

#include "race.h"


Race::Race() {
	for (int num = 0; num < Race::NUM_HORSES; num++) {
		Race::horses[num].init(num, Race::TRACK_LENGTH);
	} //end for loop
} //end constructor

void Race::start() {
	//printing the initial start of the race
	for (int i = 0; i < Race::NUM_HORSES; i++) {
		Race::horses[i].printLane();
	} //end for loop
	std::cin.ignore();
	//the main loop of the race
	bool keepGoing = true;
	while (keepGoing == true) {
		for (int horseNum = 0; horseNum < Race::NUM_HORSES; horseNum++) {
			Race::horses[horseNum].advance();
			Race::horses[horseNum].printLane();
			int won = Race::horses[horseNum].isWinner();
			if (won == true) {
				keepGoing = false;
			} //end if
		} //end for loop
		std::cout << "Press ENTER for next turn" << std::endl;
		std::cin.ignore();
	} //end while
} //end start
