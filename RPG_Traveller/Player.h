#pragma once
#include "Level.h"
#include "Trove.h"
#include "Enums.h"
#include <string>
#include "Statistics.h"

class Player
{
private:
	Statistics playerStatistics;
	Level level;
	std::string name;
public:
	Player();
	~Player();
	void setName(std::string name);
	int Hit();
	int getHP();
	void addLevel();
	int getLevel();
	void getHit(int DMG);
	Trove give(int value);
	void get(Trove toAdd);
	void info();

};

