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

#include "Pet.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

int main() {

	myPet tama;
	std::stringstream ss{""};
	char choice;
	bool quit = false;
	do {
		system("cls");

		std::cout <<
			"************** Pet Caretaker **************\n"
			"*                                         *\n"
			"* (L) - Listen to pet, check pet's mood   *\n"
			"* (F) - Feed pet                          *\n"
			"* (P) - Play with pet                     *\n"
			"* (T) - Ask pet to do a trick             *\n"
			"* (Q) - Quit program                      *\n"
			"*                                         *\n"
			"*******************************************" << std::endl;

		std::stringstream().swap(ss);

		std::cin >> choice;

		switch (choice) {
		case 'l':
		case 'L':
			ss << tama.talk();
			break;
		case 'f':
		case 'F':
			ss << tama.feed();
			break;
		case 'p':
		case 'P':
			ss << tama.play();
			break;
		case 't':
		case 'T':
			ss << tama.doTrick();
			break;
		case 'q':
		case 'Q':
			quit = true;
			break;
		default:
			ss << "Invalid option, please select a valid option.\n";
		}
		system("pause");
	} while (!quit);
}