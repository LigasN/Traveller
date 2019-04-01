#include "Level.h"



Level::Level()
{
	level = 1;
}


Level::~Level()
{
}

void Level::setLevel(int level)
{
	this->level = level;
}

void Level::increaseLEvel()
{
	level++;
}

int Level::getLevel()
{
	return level;
}
