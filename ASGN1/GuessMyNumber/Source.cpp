//
//  Source.cpp
//  GuessMyNumber
//
//  Created by David Burchill on 2019-09-24.
//  Copyright © 2019 David Burchill. All rights reserved.
//
//  Template code for PROG 1260
//   
//  NBCC asserts copyright ownership of this template and all derivative
//  works, including solutions to the projects assigned in this course. Students
//  and other users of this template code are advised not to share it with others
//  or to make it available on publicly viewable websites including repositories
//  such as githuband gitlab.This copyright statement should not be removed
//  or edited.
//  
//  We do grant permission to share solutions privately with non - students such
//  as potential employers. However, sharing with other current or future
//  students of PROG 1260 is prohibited and subject to being investigated as a
//  student policy code violation.
//
//---- - do not edit anything above this line-- -

#include <iostream>
#include "Secret.h"
#include "Util.h"

int main(int argc, const char* argv[]) {

	std::cout << "Welcome to guess my number.\n" <<
		"guess a number between 1 and 100 in \n" <<
		"6 or less trys to win this skill testing game.\n\n";

	Secret game;
	int userGuess;
	char play = 'y';

	while (play == 'y' || play == 'Y') {
		
		game.reset(); // start a new game

		
		while (game.isOn()) {
			std::cout << "guess a number(" << game.guessesLeft() << "): ";
			std::cin >> userGuess;
			std::cout << game.guess(userGuess) << std::endl;
		}

		std::cout << "Play again (y/n): ";
		std::cin >> play;
	}
	std::cout << "BYE\n\n";
}

