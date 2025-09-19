#include <iostream>
//#include <ctime>

//the header files
#include "horse.h"


int main() {
	//seeding the random number generator
	srand(time(0));

	std::cout << "Hello World" << std::endl;
	Horse guy = Horse();
	guy.init(5, 10);
	guy.advance();
	guy.advance();
	guy.advance();
	guy.printLane();
	return 0;
}
