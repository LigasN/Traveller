#include "Ghali_Riverside.h"
#include <iostream>



Ghali_Riverside::Ghali_Riverside()
{
	LocationState::MAX_Troveboxes = 10;
	//MAX_NPCs = 10;
	//MIN_NPCs = 3;
	//for (int i = 0; i < rand() % MAX_Troveboxes; i++) {
	//	//add more itemsto win
	//	Trove add("Arum_City", 0);
	//	box.addTrove(add);
	//}

	//for (int i = 0; i < rand() % (MAX_NPCs - MIN_NPCs) + MIN_NPCs; i++) {
	//	NPC newNPC((int)rand() % (NPCTypes::EJournalist - NPCTypes::ECriminal) + NPCTypes::ECriminal);
	//	npc.push_back(newNPC);
	//}
}

Ghali_Riverside::~Ghali_Riverside()
{
}

void Ghali_Riverside::goLeft(LocationContext * newOne)
{
	system("cls");
	std::cout << TEXTS[language][Road + 3];
	newOne->setLocation(new Ghali_Forest());
	delete this;
}

void Ghali_Riverside::goRight(LocationContext * newOne)
{
	system("cls");
	std::cout << TEXTS[language][Road + 4];
	newOne->setLocation(new Arum_Suburbs());
	delete this;
}

Locations Ghali_Riverside::getName()
{
	return Locations::Riverside;
}

void Ghali_Riverside::info()
{
	//std::cout << TEXTS[Game::getInstance().getLanguage()][First_look_Arum_Suburbs_2]; TO WRITE
}

