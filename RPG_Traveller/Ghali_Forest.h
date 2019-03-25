#pragma once
#include "TroveBox.h"
#include "LocationContext.h"
#include "LocationState.h"
#include "TroveBox.h"
#include <iostream>
#include "TEXT.h"
#include "Game.h"
#include "Enums.h"
#include "Ghali_Riverside.h"

class Ghali_Forest : public LocationState
{
public:
	Ghali_Forest();
	~Ghali_Forest();

	void goLeft(LocationContext * newOne);
	void goRight(LocationContext * newOne);


	virtual Locations getName();
	virtual void info();
};

