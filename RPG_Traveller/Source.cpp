#pragma once
#include "Game.h"
#include <time.h>
#include <cstdlib>

int main() {
	srand((unsigned int)time(NULL));

	while (!Game::getInstance().getGameOver())
	{
		Game::getInstance().Update();
	}
	return EXIT_SUCCESS;
}