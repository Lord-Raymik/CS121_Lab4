#ifndef HAS_RACE_H
#define HAS_RACE_H

#include "horse.h"


class Race {
	private:
		const static int TRACK_LENGTH;
		const static int NUM_HORSES;
		Horse horses[];
	public:
		Race();
		void start();
};

#endif
