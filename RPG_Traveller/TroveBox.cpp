#include "TroveBox.h"
#include <iostream>
#include "TEXT.h"
#include "Game.h"
#include "Enums.h"



TroveBox::TroveBox()
{
}

TroveBox::TroveBox(const char * recipient)
{/////////To add more more code
	if ("Arum_City") {
		Trove add(Items::Sword, 2);
		TrovesIn.push_back(add);
	}
	else if ("Arum_Suburbs") {
		Trove add(Items::Sword, 1);
		TrovesIn.push_back(add);
	}
	else if ("Ghali_Forest") {
		Trove add(Items::Sword, 1);
		TrovesIn.push_back(add);
	}
	else if ("Ghali_Riverside") {
		Trove add(Items::Sword, 1);
		TrovesIn.push_back(add);
	}
	else if ("Animal") {

	}
	else if ("ECriminal") {

	}
	else if ("EBystander") {

	}
	else if ("EWorker") {

	}
	else if ("EDealer") {

	}
	else if ("ESmith") {

	}
	else if ("ECity_official") {

	}
	else if ("EJournalist") {

	}
	else if ("Derelict_House") {

	}
}


TroveBox::~TroveBox()
{
}

void TroveBox::info()
{
	std::cout << TEXTS[Game::getInstance().getLanguage()][Shop] << std::endl;
	for ( int i = 0; i != TrovesIn.size(); i++) {
		std::cout << i << " - ";
		TrovesIn[i].info();
	}
		
}

int TroveBox::getSize()
{
	return TrovesIn.size();
}

Trove TroveBox::GetAndDeleteTrove()
{//zrobic zeby mozna bylo dawac konkretna wartosc a nie wszystko
	info();
	int option{};
	std::cin >> option;
	Trove toGive = TrovesIn[option];
	TrovesIn.erase(TrovesIn.begin() + option);
	return toGive;
}

Trove & TroveBox::getTroveInfo(int option)
{
	return TrovesIn[option];
}

Trove TroveBox::getTrove(int option)
{
	Trove toGive = TrovesIn[option];
	TrovesIn.erase(TrovesIn.begin() + option);
	return toGive;
}

void TroveBox::addTrove(Trove & toAdd)
{
	TrovesIn.push_back(toAdd);
}
