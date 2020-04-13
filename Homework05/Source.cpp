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

class Date {
public:

	void setDay(int D) {
		day = D;
	}
	int getDay() {
		if (day > 31) {
			day = 1;
		}
		return day;
	}

	void setYear(int Y) {
		if (Y < 0 || Y > 3000) {
			Y = 2019;
		}
		year = Y;
	}

	int getYear() {
		check = year % 4;
		checkCent = year / 400;

		if (check == 0) {
			std::cout << "this is a leap year\n";
		}
		else if (checkCent == 0) {
			std::cout << "this is a leap year\n";
		}
		else {
			std::cout << "Not a leap year\n";
		}
		return year;
	}

	void setMonth(int M) {
		month = M;
	}
	int getMonth() {
		if (check == 0 || checkCent == 0) {
			if (month == 2 && day > 29) {
				day = 1;
			}
		}
		else if (day > 28 && month == 2) {
			day = 1;
		}
		else if (month > 12 || month < 1) {
			month = 1;
		}
		return month;
	}

	int getDate() {
		getYear();
		getMonth();

		std::cout << month << "/" << day << "/" << year << std::endl;
		return year;
	}

private:
	int day{ 0 };
	int month{ 0 };
	int year{ 0 };
	int check{ 0 };
	int checkCent{ 0 };
};

int main() {

	Date loc;
	loc.setYear(1988);
	loc.setDay(30);
	loc.setMonth(2);

	std::cout << loc.getDate();
}