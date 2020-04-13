
#pragma once

#include <iostream>
#include <string>
#include <random>

struct racer {
	std::string name;
	unsigned int position;
	racer() : position(1) {}
};

enum class GameStates { PLAY, EXIT };

class TortoiseAndHare {
private:
	static const size_t finish = 70;

	racer _tortoise;
	racer _hare;

	GameStates _gameState;

	std::mt19937 odds;

	void initialise();
	void moveTortoise(racer&);
	void moveHare(racer&);
	bool isWinner(racer&);
	void printProgress();
	void results();
	void reset();
	int getRandomNumber();

public:
	TortoiseAndHare() : _gameState(GameStates::PLAY), odds(std::random_device()()) {}
	~TortoiseAndHare() {}
	void go();
};