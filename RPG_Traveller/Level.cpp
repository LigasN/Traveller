#include "Level.h"



Level::Level()
{
	level = 1;
}


Level::~Level()
{
}

void Level::increaseLEvel()
{
	level++;
}

void Level::setLevel(int level)
{
	this->level = level;
}

int Level::getLevel()
{
	return level;
}
