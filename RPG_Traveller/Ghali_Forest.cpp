#include "Ghali_Forest.h"
#include <iostream>

Ghali_Forest::Ghali_Forest()
{
	LocationState::MAX_Troveboxes = 10;
	/*MAX_NPCs = 10;
	MIN_NPCs = 3;*/
	//for (int i = 0; i < rand() % MAX_Troveboxes; i++) {
	//	//add more itemsto win
	//	Trove add("Arum_City", 0);
	//	box.addTrove(add);
	//}

	/*for (int i = 0; i < rand() % (MAX_NPCs - MIN_NPCs) + MIN_NPCs; i++) {
		NPC newNPC((int)rand() % (NPCTypes::EJournalist - NPCTypes::ECriminal) + NPCTypes::ECriminal);
		npc.push_back(newNPC);
	}*/
}

Ghali_Forest::~Ghali_Forest()
{
}

void Ghali_Forest::goLeft(LocationContext * newOne)
{
	system("cls");
	std::cout << TEXTS[language][Road + 5];
	newOne->setLocation(new Ghali_Forest());
	delete this;
}

void Ghali_Forest::goRight(LocationContext * newOne)
{
	system("cls");
	std::cout << TEXTS[language][Road + 6];
	newOne->setLocation(new Ghali_Riverside());
	delete this;
}

Locations Ghali_Forest::getName()
{
	return Locations::Forest;
}

void Ghali_Forest::info()
{
	//std::cout << TEXTS[Game::getInstance().getLanguage()][First_look_Arum_Suburbs_2]; TO WRITE
}
