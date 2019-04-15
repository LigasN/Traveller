#pragma once
#include "Enums.h"
#include <iostream>
#include "TEXT.h"
#include <vector>
#include "Marsaglia's_Xorshift_Random_Numbers.h"

class Trove
{
private:
	int DMG;
	int amount;
	int strength;
	int value;
	Items type;
	int maxAmount;
public:
	Trove();
	Trove(Items type, int amount);
	~Trove();
	void info();
	std::string getInfoString();
	int makeDMG();
	int getDMG();
	int getValue();
	Trove getAmountOf(int amount);
	int getAmount();
	int takeAmount(int amount);
	void resetStrength();
};

