

#include "TortAndHare.h"
#include <ctime>

 // initialises member variables
void TortoiseAndHare::initialise() {
	srand(time(0));

	_gameState = GameStates::PLAY;

	_tortoise.name = "T";
	_hare.name = "H";

	std::cout << "BANG !!!!!\n"
		<< "AND THEY'RE OFF !!!!!" << std::endl;
}

// entry point
void TortoiseAndHare::go() {
	initialise();

	while (_gameState != GameStates::EXIT) {
		moveTortoise(_tortoise);
		moveHare(_hare);

		printProgress();

		if (isWinner(_tortoise) || isWinner(_hare)) {
			_gameState = GameStates::EXIT;
		}
	}

	results();
}

// move tortoise
void TortoiseAndHare::moveTortoise(racer& t) {
	int tMove = getRandomNumber();

	// fast plod
	if (tMove >= 1 && tMove <= 5) {
		t.position = (((t.position + 3) > finish) ? finish : t.position += 3);
		// slip
	}
	else if (tMove <= 7) {
		t.position = ((t.position <= 6) ? 1 : t.position -= 6);
		// slow plod
	}
	else {
		t.position = (((t.position + 1) > finish) ? finish : t.position += 1);
	}
}

// move hare
void TortoiseAndHare::moveHare(racer& h) {
	int hMove = getRandomNumber();

	// big hop
	if (hMove == 3 || hMove == 4) {
		h.position = (((h.position + 9) > finish) ? finish : h.position + 9);
		// big slip
	}
	else if (hMove == 5) {
		h.position = ((h.position <= 12) ? 1 : h.position -= 12);
		// small hop
	}
	else if (hMove <= 8) {
		h.position =
			(((h.position + 1) > finish) ? finish : h.position + 1);
		// small slip
	}
	else if (hMove <= 10) {
		h.position = ((h.position <= 2) ? 1 : h.position -= 2);
	}
	// sleep do nothing
}

// check for winner
bool TortoiseAndHare::isWinner(racer& p) {
	return p.position >= finish;
}

// print race progress
void TortoiseAndHare::printProgress() {
	for (unsigned int i = 1; i <= finish; ++i) {
		if (_tortoise.position == i && _hare.position == i) {
			std::cout << "OUCH";
			i += 3;  //to make up for the characters 
		}
		else if (_tortoise.position == i) {
			std::cout << _tortoise.name;
		}
		else if (_hare.position == i) {
			std::cout << _hare.name;
		}
		else {
			std::cout << "-";
		}
	}
	std::cout << std::endl;
	system("cls");
}

// print result labels
void TortoiseAndHare::results() {
	if (_tortoise.position == finish && _hare.position == finish) {
		std::cout << "\nIt's a tie.\n" << std::endl;
	}
	else if (_tortoise.position == finish) {
		std::cout << "\nTORTOISE WINS!!!YAY!!!\n" << std::endl;
	}
	else {
		std::cout << "\nHare wins. Yuch.\n" << std::endl;
	}

	int choice;
	std::cout << "1. Play again\n2. Exit\n> ";
	std::cin >> choice;

	if (choice == 1) { reset(); }
}

//reset for a new game
void TortoiseAndHare::reset() {
	_tortoise.position = 0;
	_hare.position = 0;
	go();
}

// percentage generator
int TortoiseAndHare::getRandomNumber() {
	return std::uniform_int_distribution<int>{1, 10}(odds);
}