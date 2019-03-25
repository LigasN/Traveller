#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"


class Bystander : NPC
{
public:
	Bystander();
	~Bystander();

	virtual void Talk();
	virtual int Hit();

};

