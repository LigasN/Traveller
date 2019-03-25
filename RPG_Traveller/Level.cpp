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

int Level::getLevel()
{
	return level;
}
