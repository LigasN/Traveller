#pragma once
#include "TroveBox.h"
#include "Enums.h"
#include "LocationContext.h"
#include "LocationState.h"
#include <iostream>
#include "TEXT.h"
#include "NPCSDefinitions.h"
#include "Arum_Suburbs.h"

class Arum_City : public LocationState
{
private:
	Locations locations;

public:
	Arum_City();
	~Arum_City();

	/*void goLeft(LocationContext * newOne);
	void goRight(LocationContext * newOne);*/

	virtual int getName();
	virtual void info();
};
