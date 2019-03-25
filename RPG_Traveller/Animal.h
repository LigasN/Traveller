#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"

class Animal : NPC 
{
public:
	Animal();
	~Animal();

	virtual void Talk();
	virtual int Hit();

};

