#include "Criminal.h"
#include <iostream>



Criminal::Criminal()
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


Criminal::~Criminal()
{
}

void Criminal::Talk()
{
	std::cout << "gadanie\n\n";//to grow
}

int Criminal::Hit()
{
	int max_rand = 2;// statistics.backpack_capacity();
	int choice = rand() % max_rand;

	return statistics.trove.getTroveInfo(choice).makeDMG();
}
