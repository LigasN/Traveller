/////////////////////////////////////////////////////////////////////////////
// HEADERS
/////////////////////////////////////////////////////////////////////////////
#include "Player.h"
#include <iostream>
#include "TEXT.h"

Player::Player()
{
	TroveBox box(NPCTypes::EPlayer, false);
	Trove trove(Items::Sword, 1);
	box.addTrove(trove);
	playerStatistics.trove = box;
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
	playerStatistics.HP -= 100 * DMG / playerStatistics.stamina;
	playerStatistics.stamina -= 10;
}

Trove Player::give(int value)
{
	return playerStatistics.trove.GetAndDeleteTrove();
}

void Player::get(Trove toAdd)
{
	playerStatistics.trove.addTrove(toAdd);
}

void Player::info()
{
	std::cout << TEXTS[language][staty_show] << level.getLevel();
	std::cout << TEXTS[language][show_HP] << playerStatistics.HP;
	std::cout << TEXTS[language][show_strength] << playerStatistics.strength;
	std::cout << TEXTS[language][show_stamina] << playerStatistics.stamina;
	std::cout << TEXTS[language][show_respect] << playerStatistics.respect;
	std::cout << TEXTS[language][show_persuasion_power] << playerStatistics.persuasion_power;
	std::cout << TEXTS[language][show_backpack_capacity] << playerStatistics.backpack_capacity;
	std::cout << TEXTS[language][show_your_troves];
	playerStatistics.trove.info();
	std::cout << std::endl << std::endl;
}

void Player::resetStatistics()
{
	playerStatistics.HP = 100;
	playerStatistics.persuasion_power = 100;
	playerStatistics.strength = 100;
	playerStatistics.stamina = 100;
	playerStatistics.respect = 100;
	playerStatistics.persuasion_power = 100;
}
