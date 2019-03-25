#include "Trove.h"
#include <iostream>


Trove::Trove()
{
	// write more types with rand
	type = Items::Sword;
	DMG = 10;
	amount = 1;
	strength = 500;
	value = 1000;
}

Trove::Trove(Items type, int amount)
{
	this->type = type;
	this->amount = amount;
	if (type == Items::Sword) {
		DMG = 10;
		strength = 500;
		value = rand() % 5000 + 1000;
	}
}


Trove::~Trove()
{
}

void Trove::info()
{
	//to send to TEXTS
	std::cout << "typ: ";
	if (Items::Sword) std::cout << "Sword";
	//to write more items
	std::cout << " - Zadawane zniszczenia: " << DMG << " - liczba: " << amount << " - Zu¿ycie: " << strength << "/n";
}

int Trove::makeDMG()
{
	strength -= DMG / 2;
	if (strength <= 0) {
		amount--;
		resetStrength();
	}

	return DMG;
}

int Trove::getValue()
{
	return value * strength / 100;
}

Trove & Trove::getAmountOf(int amount)
{
	Trove toGive(type, amount);
	return toGive;
}

int Trove::getAmount()
{
	return amount;
}

void Trove::takeAmount(int amount)
{
	this->amount += amount;
}
void Trove::resetStrength()
{
	if (type == Items::Sword)
		strength = 500;
}
