#pragma once
class myPet {
public:
	myPet();
	void feed();
	void play();
	std::string talk();
	std::string doTrick();
private:
	int mood_ = 0;
	int hunger_ = 0;
	void passTime();
	std::string getMood();
};