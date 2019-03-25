#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"


class Smith : NPC
{
public:
	Smith();
	~Smith();

	virtual void Talk();
	virtual int Hit();

};

