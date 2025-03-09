#pragma once


#include <ctime>
#include <iostream>
#include "word.h"


class Hangman: public Word
{
protected:
	time_t startTime = time(0);

public:
	void Picture();

	bool Game();
};

