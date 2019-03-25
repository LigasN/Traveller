#pragma once
#include "Enums.h"
#include "Statistics.h"

class NPC
{
protected:
	Statistics statistics;
public:
	NPC();
	~NPC();

	virtual void Talk();
	virtual int Hit();

	int getHP();
	void getHit(int DMG);
	Trove give(int value);
	void get(Trove toAdd);
	void statisticsInfo();
	void troveInfo();
};
