#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"

class Dealer : public NPC
{
public:
	Dealer();
	~Dealer();

	virtual void Talk();
	virtual int Hit();

};

