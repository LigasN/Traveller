#pragma once
#include "Game.h"
#include <time.h>
#include <cstdlib>

int main() {
	srand((unsigned int)time(NULL));

	while (!Game::getInstance().getGameOver())
	{
		if (Game::getInstance().Update() == EXIT_SUCCESS) break;
	}
	return EXIT_SUCCESS;
}