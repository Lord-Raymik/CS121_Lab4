#ifndef HAS_HORSE_H
#define HAS_HORSE_H

#include <cstdlib>

class Horse {
	private:
		int horseNumber;
		int position;
		int TRACK_LENGTH;
	public:
		Horse();
		void init(int, int);
		void advance();
		void printLane();
		bool isWinner();
};

#endif //HAS_HORSE_H
