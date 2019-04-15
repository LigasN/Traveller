#pragma once
#include "Enums.h"
#include "LocationState.h"

class LocationContext
{
private:
	class LocationState * actualLocation;			//make it on unique ptr
	bool moveDone{};
	Locations location;

public:
	LocationContext();
	~LocationContext();

	LocationState * getLocation();
	void setLocation(LocationState * newOne);


	void info();
	Locations getName();
	bool move(bool left);
	void addTrove(Trove & toAdd);
	Trove getTrove();
};


