#include "Trove.h"

Trove::Trove()
{
	// write more types with rand
	type = Items::Sword;
	DMG = 10;
	amount = 1;
	strength = 500;
	value = 1000;
	maxAmount = 1;
}

Trove::Trove(Items type, int amount)
{
	this->type = type;
	this->amount = amount;
	if (type == Items::Sword) {
		DMG = 10;
		strength = 500;
		value = rand() % 5000 + 1000;
		maxAmount = 2;
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

std::string Trove::getInfoString()
{
	std::string infos{};
	infos += "typ: ";
	if (Items::Sword) infos += "Sword";
	//to write more items
	infos += " - Zadawane zniszczenia: ";
	infos += DMG;
	infos += " - liczba: ";
	infos += amount;
	infos += " - Zuzycie: ";
	infos += strength;
	infos += "/n";
	return infos;
}

int Trove::makeDMG()
{
	strength -= DMG / 2;
	if (strength <= 0) {
		amount--;
		if (amount == 0) {
			std::cout << TEXTS[language][empty];
			Trove::~Trove();							//moze powodowac bledy
		}
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

int Trove::takeAmount(int amount)
{
	if (this->amount + amount <= maxAmount)
	{
		this->amount += amount;
		std::cout << TEXTS[language][added_trove];
		return 0;
	}
	else
	{
		this->amount = maxAmount;
		std::cout << TEXTS[language][overloadedTrove] << amount - (maxAmount - this->amount) << TEXTS[language][overloadedTrove2];
		return amount - (maxAmount - this->amount);
	}
}

void Trove::resetStrength()
{
	if (type == Items::Sword)
		strength = 500;
}
