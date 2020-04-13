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

//Excercise 4.13

int main() {
	float kms{ 0 };
	float liters{ 0 };
	float avg{ 0 };
	float avg100{ 0 };


	while (true) {
		system("cls");
		std::cout << "Enter the amount of kilometers driven \n";
		std::cin >> kms;
		std::cout << "Enter the amount of liters used \n";
		std::cin >> liters;

		if (kms == -1 || liters == -1) {
			break;
		}

		avg = kms / liters;
		std::cout << "Kilometers per liter: " << avg << std::endl;
		float avg100{ 0 };
		avg100 = 100 * (liters / kms);
		std::cout << "Average consumption per 100KM: " << avg100 << std::endl;
		system("pause");
	}
}