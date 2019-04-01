#include "Worker.h"

#include <iostream>


Worker::Worker()
{
	statistics.HP = 100;
	statistics.backpack_capacity = 2;
	statistics.persuasion_power = 30;
	statistics.respect = 10;
	statistics.stamina = 25;
	statistics.strength = 30;
	TroveBox box(NPCTypes::EWorker, false);
	Trove trove(Items::Sword, 1);
	box.addTrove(trove);
	statistics.trove = box;
}


Worker::~Worker()
{
}

void Worker::Talk()
{
	std::cout << "gadanie\n\n";//to grow
}

int Worker::Hit()
{
	int max_rand = 2;// statistics.backpack_capacity();
	int choice = rand() % max_rand;

	return statistics.trove.makeDMG();
}
