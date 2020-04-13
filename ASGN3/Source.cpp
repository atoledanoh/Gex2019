/*
* @file <========================.cpp>
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
*  < pet caretaker game with actions like feed and play with pet >
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

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>

std::string selectWord(); //choose a word from a string array
std::string wordScramble(std::string); //scramble the previously selected word
void theGame(std::string); //compare and decide if the game is won or lost

int main() {

	char choice;
	bool quit = false;
	std::string originalWord{""};
	std::string scrambledWord{""};

	do {
		system("cls");

		std::cout <<
			"************** Word Jumble **************\n"
			"*                                       *\n"
			"* (P) - Play Word Jumble                *\n"
			"* (Q) - Quit program                    *\n"
			"*                                       *\n"
			"*****************************************" << std::endl;

		std::cin >> choice;

		switch (choice) {
		case 'p':
		case 'P':
			originalWord = selectWord();
			//std::cout << originalWord << std::endl;
			scrambledWord = originalWord;
			scrambledWord = wordScramble(originalWord);
			std::cout << scrambledWord << std::endl;
			theGame(originalWord);
			break;
		case 'q':
		case 'Q':
			quit = true;
			break;
		default:
			std::cout << "Invalid option, please select a valid option.\n";
			std::cin.ignore(1000, '\n');
		}
		system("pause");
	} while (!quit);
}

std::string selectWord() { //choose a word from a string array
	std::string str;
	int word;
	const int sizeOfArray = 10; //size of arrays to set later at the creation
	srand(time(NULL)); //seed rand
	std::string wordList[sizeOfArray] = { "jewel","lovely","awake","camera","aggresive","adjustment","hollow","program","deliver","economic" };
	word = rand() % sizeOfArray; //randomizing
	str = wordList[word];
	return str;
}

std::string wordScramble(std::string str) { //scramble the previously selected word
	int x = str.length();
	for (int y = x; y > 0; y--) {
		int pos = rand() % x;
		char tmp = str[y - 1];
		str[y - 1] = str[pos];
		str[pos] = tmp;
	}
	return str;
}

void theGame(std::string str) { //compare and decide if the game is won or lost
	//std::cout << str << std::endl;
	bool isOn = true;
	int tries = 5;
	std::string playerGuess{};
	do {
		std::cout << "You have: "<< tries <<" tries left.\n";
		std::cin >> playerGuess;
		tries--;

		if (playerGuess == str) {
			std::cout << "That's correct! You win!\n";
			isOn = false;
		}
		if (tries == 0) {
			std::cout << "You lose. Better luck next time.\n";
			isOn = false;
		}
	} while (isOn);
}