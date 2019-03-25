#include "Arum_Suburbs.h"
#include <iostream>


Arum_Suburbs::Arum_Suburbs()
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

Arum_Suburbs::~Arum_Suburbs()
{
}

void Arum_Suburbs::goLeft(LocationContext * newOne)
{
	system("cls");
	std::cout << TEXTS[language][Road + 1];
	newOne->setLocation(new Ghali_Riverside());
	delete this;
}

void Arum_Suburbs::goRight(LocationContext * newOne)
{
	system("cls");
	std::cout << TEXTS[language][Road + 2];
	newOne->setLocation(new Arum_City());
	delete this;
}

Locations Arum_Suburbs::getName()
{
	return Locations::Suburbs;
}

void Arum_Suburbs::info()
{
	//std::cout << TEXTS[Game::getInstance().getLanguage()][First_look_Arum_Suburbs_2]; TO WRITE
}
