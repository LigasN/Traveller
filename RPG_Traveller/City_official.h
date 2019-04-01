#pragma once
#include "Statistics.h"
#include "Enums.h"
#include "NPC.h"


class City_official : public NPC
{
public:
	City_official();
	~City_official();

	virtual void Talk();
	virtual int Hit();

};

