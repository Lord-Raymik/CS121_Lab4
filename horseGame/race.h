#ifndef HAS_RACE_H
#define HAS_RACE_H

#include "horse.h"


class Race {
	private:
		static const int TRACK_LENGTH = 15;
		static const int NUM_HORSES = 7;
		Horse horses[NUM_HORSES];
	public:
		Race();
		void start();
};

#endif
