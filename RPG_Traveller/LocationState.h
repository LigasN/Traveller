#pragma once
#include "TroveBox.h"
#include "NPC.h"
#include <vector>
#include "Enums.h"
#include "LocationContext.h"

class LocationState
{
protected:
	TroveBox box;
	NPCTypes npcsTypes;
	//std::vector<NPC> npc;  Must be solved with children
	const char* name{};
	int MAX_Troveboxes{};
	int MAX_NPCs{};
	int MIN_NPCs{};

public:
	virtual void goLeft(LocationContext *newOne);
	virtual void goRight(LocationContext *newOne);
	virtual Locations getName();
	virtual void info();
	void addTrove(Trove & toAdd);
	Trove getTrove();
};
