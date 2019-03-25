#pragma once
#include "Enums.h"

class Trove
{
private:
	int DMG;
	int amount;
	int strength;
	int value;
	Items type;
public:
	Trove();
	Trove(Items type, int amount);
	~Trove();
	void info();
	int makeDMG();
	int getValue();
	Trove & getAmountOf(int amount);
	int getAmount();
	void takeAmount(int amount);
	void resetStrength();
};

