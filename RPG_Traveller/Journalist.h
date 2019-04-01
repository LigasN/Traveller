#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"

class Journalist : public NPC
{
public:
	Journalist();
	~Journalist();

	virtual void Talk();
	virtual int Hit();

};

