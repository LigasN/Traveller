#include "LocationState.h"
#include "Trove.h"
#include <iostream>

//void LocationState::goLeft(LocationContext * newOne)
//{
//	std::cout << std::endl;
//}
//
//void LocationState::goRight(LocationContext * newOne)
//{
//	std::cout << std::endl;
//}

int LocationState::getName()
{
	return Locations::City;
}

void LocationState::info()
{

}

void LocationState::addTrove(Trove & toAdd)
{
	box.addTrove(toAdd);
}

Trove LocationState::getTrove()
{
	int option = rand() % box.getSize();
	
	return box.getTrove(option);
}

