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

#include <cmath>
#include <iostream>
#include <algorithm>

bool isRightTriangle(int, int, int);

int main(int argc, const char* argv[]) {
	int sides = 500;
	std::cout << "All Pythagorean Triples up to sides of " << sides << std::endl;

	//+1 at inner loops to avoid duplication
	for (int i = 1; i <= sides; i++) {
		for (int j = i + 1; j <= sides; j++) {
			for (int k = j + 1; k <= sides; k++) {
				if (isRightTriangle(i, j, k)) {
					std::cout << i << "\t" << j << "\t" << k << "\n";
				}
			}
		}
	}

	return 0;
}
bool isRightTriangle(int a, int b, int c) {
	// determine hypotenuse by looking for the longest side
	int hypotenuse = std::max(a, std::max(b, c));

	if (hypotenuse == a) {
		return pow(b, 2) + pow(c, 2) == pow(hypotenuse, 2);
	}
	else if (hypotenuse == b) {
		return pow(a, 2) + pow(c, 2) == pow(hypotenuse, 2);
	}
	else {
		return pow(a, 2) + pow(b, 2) == pow(hypotenuse, 2);
	}
}