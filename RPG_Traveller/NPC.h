#pragma once
#include "Enums.h"
#include "Statistics.h"

class NPC
{
protected:

public:
	NPC();
	~NPC();
	Statistics statistics;
	virtual void Talk();
	virtual int Hit();

	int getHP();
	void getHit(int DMG);
	Trove give(int value);
	void get(Trove toAdd);
	void statisticsInfo();
	void troveInfo();
};
