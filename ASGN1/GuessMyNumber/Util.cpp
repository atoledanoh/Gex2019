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

#include "Util.h"

#include <iostream>

int getNumber() {
	int a;
	std::cin >> a;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Please enter a valid number: ";
		std::cin >> a;
	}
	return a;
}
