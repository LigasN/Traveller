#include "City_official.h"
#include <iostream>



City_official::City_official()
{
	statistics.HP = 100;
	statistics.backpack_capacity = 2;
	statistics.persuasion_power = 30;
	statistics.respect = 10;
	statistics.stamina = 25;
	statistics.strength = 30;
	TroveBox box;
	Trove trove(Items::Sword, 1);
	box.addTrove(trove);
	statistics.trove = box;
}

City_official::~City_official()
{
}

void City_official::Talk()
{
	std::cout << "gadanie\n\n";//to grow
}

int City_official::Hit()
{
	int max_rand = 2;// statistics.backpack_capacity();
	int choice = rand() % max_rand;

	return statistics.trove.getTroveInfo(choice).makeDMG();
}
