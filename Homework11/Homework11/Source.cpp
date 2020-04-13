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
*  < ====================================================================== >
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
#include <ctime>
#include <cmath>

void dice();
bool isPerfect(long);
void perfectNum();

int main() {	
	char c;
	bool quit = false;

	while (!quit) {
		system("cls");
		std::cout <<
			"*************** Homework 11 ***************\n" <<
			"*                                         *\n" <<
			"* (D)  Roll a Dice                        *\n" <<
			"* (P)  perfect number                     *\n" <<
			"* (Q)  To Quit                            *\n" <<
			"*                                         *\n" <<
			"*******************************************\n";
		std::cin >> c;
		switch (c) {
		case 'd':
		case 'D':
			dice();
			break;
		case 'p':
		case 'P':
			perfectNum();
			break;
		case 'q':
		case 'Q':
			quit = true;
			break;
		default:
			std::cout << "Incorrect Input. Try again. \n";
			break;
		}
		system("pause");
	}
}

void dice() {
	srand(time(0));
	int dice1 = rand() % 6 + 1;
	std::cout << dice1 << '\n';
}

// checks whether n is a perfect number
bool isPerfect(long n) {
	long sum = 0;

	// sum all divisors up to n/2
	for (long i = 1; i <= n / 2; i++) {
		if (n % i == 0) { sum += i; }
	}
	return sum == n;
}

void perfectNum() {
	for (long i = 1; i <= 10000; i++) {
		// print perfect numbers
		if (isPerfect(i)) {
			std::cout << i << ":"
				<< "\t";
			// print divisors
			for (long d = 1; d < i; d++) {
				if (i % d == 0) { std::cout << d << " "; }
			}
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}