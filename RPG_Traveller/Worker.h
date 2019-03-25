#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"

class Worker : NPC
{
public:
	Worker();
	~Worker();

	virtual void Talk();
	virtual int Hit();
	
};

