#pragma once
#include "Level.h"
#include "Trove.h"
#include "Enums.h"
#include <string>
#include "Statistics.h"
#include "Episodes.h"

class Player
{
private:
	Statistics playerStatistics;
	EpisodesMachine episodes_machine;
	Level level;
	std::string name;
public:
	Player();
	~Player();
	void setName(std::string name);
	int Hit();
	int getHP();
	void setLevel(int level);
	void addLevel();
	int getLevel();
	void getHit(int DMG);
	Trove give(int value);
	void get(Trove toAdd);
	void info();
	void resetStatistics();
	void SortYourTrove();
};

