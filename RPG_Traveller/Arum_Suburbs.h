#pragma once
#include "TroveBox.h"
#include "LocationContext.h"
#include "LocationState.h"
#include <iostream>
#include "TEXT.h"
#include "Game.h"
#include "Enums.h"
#include "Arum_City.h"
#include "Ghali_Riverside.h"

class Arum_Suburbs : public LocationState
{
public:
	Arum_Suburbs();
	~Arum_Suburbs();
/*
	void goLeft(LocationContext * newOne);
	void goRight(LocationContext * newOne);*/

	virtual int getName();
	virtual void info();
};
