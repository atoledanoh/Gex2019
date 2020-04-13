#include "myPet.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <time.h>

std::stringstream ss{ "wololo" };

myPet::myPet() { //constructor + rand generator
	srand(time(NULL));
}

void myPet::feed() { //feed decreases hunger by 3
	hunger_ -= 3;
	if (hunger_ < 0) {
		hunger_ = 0;
	}
	passTime();
};

void myPet::play() { //play decreases mood by 3
	mood_ -= 3;
	if (mood_ < 0) {
		mood_ = 0;
	}
	passTime();
};

std::string myPet::talk(ss) { //talk calls getMood function
	std::stringstream ss{ "wololo" };
	getMood();
	passTime();
	return ss;
};

std::string myPet::doTrick() { //doTrick performs a random trick, out of three and calls passTime 
	int i = rand() % 3;
	std::string trick[5] = { "SINGS.", "JUMPS.", "FLIPS." };
	if (mood_ <= 3 && hunger_ <= 3) {
		std::cout << "Your pet " << trick[i] << std::endl;
	}
	else if (mood_ > 3 || hunger_ > 3) {
		std::cout << "I don't feel like it." << std::endl;
	}
	passTime();
	return mood_;
};

void myPet::passTime() { //passTime increases hunger and mood by 1
	hunger_++;
	mood_++;
};

std::string myPet::getMood() { //reads pet hunger and mood to print out a message acorgingly.

	int mad = 7;
	int frustrated = 5;
	int okay = 3;

	if (play() + feed() > okay) {

		return;
		if (play() + feed() > frustrated) {

			return;
			if (play() + feed() > mad) {

				return;
			}
			else {

				return;
			}
		}
	}
};
