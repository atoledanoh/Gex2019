/*
* @file <secret.cpp>
*
* @author  <Alejandro Toledano>
* @version <1.0>
*
* change log
* name      date
*
*
* [file, auther, version, and change log are not necessary with
*    modern source code management system]
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < secret class to implement in the guess my secret number game >
*
*
* @section LICENSE
*  <any necessary attributions>
*
*  Copyright 2019
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/

#include "Secret.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

//srand init
Secret::Secret() {
	srand(time(0));
	reset();
}

//returns the player's input guess
int Secret::guess(int guess) {
	int pGuess;
	currentGuess_ = guess;
	pGuess = currentGuess_;
	guessCount_++;
	return pGuess;
}

//true if the user guessed the number correctly
bool Secret::isWon() {
	if (guessCount_ < MAX_GUESSES && currentGuess_ == secret_) {
		std::cout << "You won!! :D \n" << std::endl;
		return true;
	}
	else {
		return false;
	}
}

//true if the user didn't guess the number
bool Secret::isLost() {
	if (MAX_GUESSES == guessCount_ && currentGuess_ != secret_) {
		std::cout << "You lost!! :( \n" << std::endl;
		return true;
	}
	else {
		return false;
	}
}

//the game keeps on going until win or lose
bool isOn() {
	if (true) {
		return false;
	}
	else
		return true;
}

//guess counter
int Secret::guessesLeft() {
	return MAX_GUESSES - guessCount_;
}

//resets the game to play again
void Secret::reset() {
	guessCount_ = 0;
	secret_ = rand() % 100 + 1;
}