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
		DMG = rand() % 80 + 10;
		strength = rand() % 200 + 50;
		maxAmount = 2;
		value = DMG * 100 + strength * 10;
	}
}


Trove::~Trove()
{
}

void Trove::info()
{
	std::cout << TEXTS[language][show_item_type];
	if (type == (int)Items::Sword) std::cout << TEXTS[language][show_item_type_sword];
	//to write more items
	std::cout << TEXTS[language][show_item_amount] << amount << TEXTS[language][show_item_maxAmount] << maxAmount << TEXTS[language][show_item_value] << value;
	std::cout << TEXTS[language][show_item_DMG] << DMG << TEXTS[language][show_item_strength] << strength << "\n";
}

std::string Trove::getInfoString()
{
	std::string infos{};
	infos += TEXTS[language][show_item_type];
	if (type == (int)Items::Sword) infos += TEXTS[language][show_item_type_sword];
	//to write more items
	infos += TEXTS[language][show_item_amount];
	infos += amount; 
	infos += TEXTS[language][show_item_maxAmount];
	infos += maxAmount;
	infos += TEXTS[language][show_item_value];
	infos += value;
	infos += TEXTS[language][show_item_DMG];
	infos += DMG;
	infos += TEXTS[language][show_item_strength];
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

int Trove::getDMG()
{
	return DMG;
}

int Trove::getValue()
{
	return value * strength / 100;
}

Trove Trove::getAmountOf(int amount)
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
