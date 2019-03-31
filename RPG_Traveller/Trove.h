#pragma once
#include "Enums.h"
#include <iostream>
#include <vector>
#include "TEXT.h"

class Trove
{
private:
	int DMG;
	int amount;
	int strength;
	int value;
	Items type;
	int maxAmount = 10;
public:
	Trove();
	Trove(Items type, int amount);
	~Trove();
	void info();
	std::string getInfoString();
	int makeDMG();
	int getValue();
	Trove & getAmountOf(int amount);
	int getAmount();
	int takeAmount(int amount);
	void resetStrength();
};

