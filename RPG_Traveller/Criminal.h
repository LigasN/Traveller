#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"


class Criminal : public NPC
{
public:
	Criminal();
	~Criminal();

	virtual void Talk();
	virtual int Hit();

};

