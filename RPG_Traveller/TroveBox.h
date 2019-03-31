#pragma once

#include "Trove.h"
#include <iostream>
#include "TEXT.h"
#include "Game.h"
#include "Enums.h"
#include "Marsaglia's_Xorshift_Random_Numbers.h"


class TroveBox
{
private:
	std::vector<Trove> TrovesIn;
	int recipient{};
	int troveLimit{};
	int amountOfTroves{};


public:
	TroveBox();
	TroveBox(int recipient, bool place);
	~TroveBox();
	void info();
	int getSize();
	Trove GetAndDeleteTrove();
	void getTroveInfo(int option);
	std::vector<std::string> getTroveString(int option);
	Trove getTrove(int option);
	bool addTrove(Trove& toAdd);

};

