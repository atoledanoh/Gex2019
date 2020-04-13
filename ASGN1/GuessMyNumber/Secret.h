#pragma once

#include <cstdio>
#include <string>

class Secret {
public:
	Secret();

	int guess(int guess);
	bool isWon();
	bool isLost();
	bool isOn() { return !isWon() && !isLost(); }
	int guessesLeft();
	void reset();

private:
	int         secret_;
	int         currentGuess_{0};
	int         guessCount_{0};
	const int   MAX_GUESSES = 7;

};
