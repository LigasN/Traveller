/////////////////////////////////////////////////////////////////////////////
// HEADERS
/////////////////////////////////////////////////////////////////////////////
#include "Player.h"
#include <iostream>
#include "TEXT.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::setName(std::string name)
{
	this->name = name;
}

int Player::Hit()
{
	int choice;
	std::cout << TEXTS[language][Hitting];
	playerStatistics.trove.info();
	std::cin >> choice;

	return playerStatistics.trove.makeDMG();
}

int  Player::getHP()
{
	return playerStatistics.HP;
}

void Player::setLevel(int level)
{
	this->level.setLevel(level);
}

void Player::addLevel()
{
	level.increaseLEvel();
}

int Player::getLevel()
{
	return level.getLevel();
}

void Player::getHit(int DMG)
{
	playerStatistics.HP -= DMG;
}

Trove Player::give(int value)
{
	Trove toGive;
	do {
		std::cout << "to small value" << std::endl;//get to texts
		toGive = playerStatistics.trove.GetAndDeleteTrove();
	} while (toGive.getValue() * toGive.getAmount() < value);

	return toGive;
}

void Player::get(Trove toAdd)
{
	playerStatistics.trove.addTrove(toAdd);
}

void Player::info()
{
	//take to text.h
	std::cout << "Twoje statystiki:\n-->Level:\t" << level.getLevel() << std::endl;
	std::cout << "-->HP:\t" << playerStatistics.HP << std::endl;
	std::cout << "-->si³a:\t" << playerStatistics.strength << std::endl;
	std::cout << "-->wytrzyma³oœæ:\t" << playerStatistics.stamina << std::endl;
	std::cout << "-->szacunek:\t" << playerStatistics.respect << std::endl;
	std::cout << "-->si³a perswazji:\t" << playerStatistics.persuasion_power << std::endl;
	std::cout << "-->pojemnoœæ plecaka:\t" << playerStatistics.backpack_capacity << std::endl;
	std::cout << "-->twój dobytek:\t";
	playerStatistics.trove.info();
	std::cout << std::endl << std::endl;
}
