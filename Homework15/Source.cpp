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
#include <array>

std::array<int, 10000> dice;
std::array<int, 11> counter;
int graphic;

int main() {

	srand(time(NULL));

	for (int i = 0; i < dice.size(); i++) {
		dice[i] = (rand() % 11) + 2;
	}

	for (int i = 0; i < counter.size(); i++) {
		for (int j = 0; j < dice.size(); j++) {
			if (dice[j] == i+2) {
				counter[i]++;
			}
		}
	}

	for (int i = 0; i < 11; i++) {
		std::cout << "Number of occurrences of number " << i+2 << " : " << counter[i] << ". " <<std::endl;
		graphic = counter[i] / 10;
		for (int j = 0; j < graphic; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}