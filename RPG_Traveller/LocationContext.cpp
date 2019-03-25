
/////////////////////////////////////////////////////////////////////////////
// HEADERS
/////////////////////////////////////////////////////////////////////////////
#include "Enums.h"
#include "LocationState.h"
#include "Trove.h"
#include "LocationContext.h"
#include "Arum_City.h"
#include "Arum_Suburbs.h"
#include "Ghali_Forest.h"
#include "Ghali_Riverside.h"



LocationContext::LocationContext()
{
	actualLocation = new Arum_City();
}


LocationContext::~LocationContext()
{
	actualLocation = nullptr;
}

//LocationState * LocationContext::getLocation()
//{
//	return actualLocation;
//}

void LocationContext::setLocation(LocationState * newOne)
{
	actualLocation = newOne;
}

void LocationContext::goLeft()
{
	actualLocation->goLeft(this);
}

void LocationContext::goRight()
{
	actualLocation->goRight(this);
}

void LocationContext::info()
{
	actualLocation->info();
}

Locations LocationContext::getName()
{
	return actualLocation->getName();
}

bool LocationContext::move(bool left)
{

	switch (location)
	{
	case Locations::City:
		if (left == false || left == true) {
			goLeft();
			return true;
		}
	case Locations::Suburbs:
		if (left == true) goLeft();
		if (left == false) goRight();
		if (left == false || left == true)	return true;

	case Locations::Forest:
		if (left == true) goLeft();
		if (left == false) goRight();
		if (left == false || left == true)	return true;

	case Locations::Riverside:
		if (left == true) goLeft();
		if (left == false) goRight();
		if (left == false || left == true)	return true;

	}
	return false;
}

void LocationContext::addTrove(Trove & toAdd)
{
	actualLocation->addTrove(toAdd);
}

Trove LocationContext::getTrove()
{
	return actualLocation->getTrove();
}
