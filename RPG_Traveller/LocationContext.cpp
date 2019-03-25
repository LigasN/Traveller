
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
	Arum_City city;
	actualLocation = &city;
	location = Locations::City;
}


LocationContext::~LocationContext()
{
	actualLocation = nullptr;
}

LocationState * LocationContext::getLocation()
{
	return actualLocation;
}

void LocationContext::setLocation(LocationState * newOne)
{
	actualLocation = newOne;
}

//void LocationContext::goLeft()
//{
//	/*actualLocation->goLeft(this);*/
//	
//	actualLocation 
//}
//
//void LocationContext::goRight()
//{
//	actualLocation->goRight(this);
//}

void LocationContext::info()
{
	actualLocation->info();
}

int LocationContext::getName()
{
	return location;
}

bool LocationContext::move(bool left)
{

	switch (location)
	{
	case Locations::City:
		if (left == false || left == true) {
			/*goLeft();*/
			Arum_Suburbs sub;
			actualLocation = &sub;
			location = Locations::Suburbs;
			return true;
		}
	case Locations::Suburbs:
		if (left == true) {
			/*goLeft();*/
			Ghali_Riverside riv;
			actualLocation = &riv;

			location = Locations::Riverside;
		}
		if (left == false) {
			/*goRight();*/
			Arum_City riv;
			actualLocation = &riv;

			location = Locations::City;
		}
		if (left == false || left == true)	return true;

	case Locations::Forest:
		if (left == true) {
			/*goLeft();*/
			Ghali_Forest riv;
			actualLocation = &riv;
			location = Locations::Forest;
		}
		if (left == false) {
			/*goLeft();*/
			Ghali_Riverside riv;
			actualLocation = &riv;
			location = Locations::Riverside;
		}
		if (left == false || left == true)	return true;

	case Locations::Riverside:
		if (left == true) {
			/*goLeft();*/
			Ghali_Forest riv;
			actualLocation = &riv;
			location = Locations::Forest;
		}
		if (left == false) {
			/*goLeft();*/
			Arum_Suburbs riv;
			actualLocation = &riv;
			location = Locations::Suburbs;
		}
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
