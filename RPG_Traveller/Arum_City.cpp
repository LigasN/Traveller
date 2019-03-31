#include "Arum_City.h"
#include <iostream>


Arum_City::Arum_City()
{

	MAX_Troveboxes = 10;
	//LocationState::MAX_NPCs = 10;
	//LocationState::MIN_NPCs = 3;
	for (int i = 0; i < rand() % MAX_Troveboxes; i++) {
		//add more itemsto win
		Trove add(Items::Sword, 0);
		box.addTrove(add);
	}

	//for (int i = 0; i < rand() % (MAX_NPCs - MIN_NPCs) + MIN_NPCs; i++) {
	//	int type  = rand() % (NPCTypes::EJournalist - NPCTypes::ECriminal) + NPCTypes::ECriminal;
	//	Journalist journalist;
	//	npc.push_back(journalist);
	//}

}


Arum_City::~Arum_City()
{
}

//void Arum_City::goLeft(LocationContext * newOne)
//{
//	system("cls");
//	std::cout << TEXTS[language][Road];
//	newOne->setLocation(new Arum_Suburbs());
//	delete this;
//}
//
//void Arum_City::goRight(LocationContext * newOne)
//{
//	system("cls");
//	std::cout << TEXTS[language][Road];
//	newOne->setLocation(new Arum_Suburbs());
//	delete this;
//}

int Arum_City::getName()
{
	return 0;
}

void Arum_City::info()
{
	//std::cout << TEXTS[Game::getInstance().getLanguage()][First_look_Arum_Suburbs_2];
}
