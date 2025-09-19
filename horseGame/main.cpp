#include <iostream>
#include <ctime>

//the header files
#include "horse.h"
#include "race.h"


int main() {
	//seeding the random number generator
	srand(time(0));

	Race test = Race();
	test.start();
}
