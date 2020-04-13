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
*  < determine the smalles of two using templates >
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

// detemine the smallest of two values (overloading)
template <typename T>
T minimum(T num1, T num2) {
	return (num1 < num2) ? num1 : num2;
}

int main() {
	std::cout << "Template testing..." << std::endl;

	// int
	std::cout << "Using int\n";
	std::cout << "minimum(79,97): " << minimum(79, 97) << std::endl;
	// char
	std::cout << "Using char\n";
	std::cout << "minimum(a, B): " << minimum('a', 'B') << std::endl;
	// float
	std::cout << "Using float\n";
	std::cout << "minimum(69.54, 69.45): " << minimum(69.54, 69.45) << std::endl;

	return 0;
}