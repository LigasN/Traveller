#include "Game.h"
#include "Enums.h"
#include "TEXT.h"
#include "NPC.h"
#include <string>
#include <iostream>
#include "Title.h"
#include "Map.h"

Game::Game() : Location()
{
	Title();
	gameOver = false;
	Location.setLocation(new Arum_City());
	std::string name{};
	std::cout << TEXTS[language][Nick];
	std::cin >> name;
	player.setName(name);
	Settings_Handle Settings(Settings_Handle::EHandledFormats::TXT);
	SettingsMap = Settings.Load_Settings();
	language = SettingsMap["language"];
	state = PlayerStates::WhatNow;
	episod = Episodes::First_moments;
	player.setLevel(SettingsMap["level"]);
	state = PlayerStates(SettingsMap["state"]);
	episod = Episodes(SettingsMap["episod"]);
}


Game::~Game()
{
}

Game * Game::instance = 0;

Game & Game::getInstance()
{
	static Game game;
	return game;
}

int Game::getLocationName()
{
	return Location.getName();
}
//
//NPC & Game::getNPC()
//{
//	return npc;
//}

void Game::locationInfo()
{
	Location.info();
}

void Game::changeLocation()
{
	int option;
	Map();
	std::cin >> option;
	Location.move(option);
}

void Game::UpdateSettings()
{
	Settings_Handle Settings(Settings_Handle::EHandledFormats::TXT);
	SettingsMap = Settings.Load_Settings();
	language = SettingsMap["language"];
	player.setLevel(SettingsMap["level"]);
	state = PlayerStates(SettingsMap["state"]);
	episod = Episodes(SettingsMap["episod"]);
}

int Game::getLanguage()
{
	return language;
}

void Game::setGameOver()
{
	gameOver = true;
}

bool Game::getGameOver()
{
	return gameOver;
}

void Game::setEpisod(Episodes episod)
{
	this->episod = episod;
}

void Game::setPlayerState(PlayerStates state)
{
	this->state = state;
}

bool Game::Update()
{
	system("cls");
	episodes_machine.EpisodFunction(episod, state, npc, "", language, getLocationName());
	char option{};

	switch (state)
	{
	case PlayerStates::playerState:
		player.info();
		std::cout << "\nk- kontynuuj";
		std::cin >> option;
		if (option == 'k')
		{
			system("cls");
			state = PlayerStates::WhatNow;
		}
		else if (option == 'u')
		{
			player.Hit();
		}
		else if (option == 'r')
		{
			player.give(1);//mozna zmienic na lepsze narzedzie
		}
		break;

	case PlayerStates::Walk:



		std::cin >> option;

		if (option == 'e')//explore
		{
			episodes_machine.SpecialEpisod("DerelictHause");
			//To write what happen do derelict hause give TroveBox, to Player get TroveBox, and decision about taking it
		}
		else if (option == 'g')//get
		{
			episodes_machine.SpecialEpisod("Trove");
			//To write what happen to Location give TroveBox, to Player get TroveBox, and decision about taking it
		}
		else if (option == 't')//talk
		{
			state = PlayerStates::Talk;
		}

	case PlayerStates::WhatNow:

		std::cin >> option;

		if (option == 't')
		{
			state = PlayerStates::Traveling;
		}
		//else if (option == 'i')
		//{
		//	state = PlayerStates::playerState;
		//}
		/*
		else if (option == 'w')
		{
			state = PlayerStates::Walk;
		}*/
		else if (option == 'd')
		{
			state = PlayerStates::Dance;
		}else if (option == 'e')
		{
			return EXIT_SUCCESS;
		}/*
		else if (option == 'l')
		{
			bool  FindedTrove = rand() % 1;
			episod = randomwolking cos tam
			if (FindedTrove) state = PlayerStates::Handel;
			else std::cout << TEXTS[language][nothing_there];
		}*/
		break;

	case PlayerStates::Traveling:

		Map();
		bool choice;
		std::cin >> option;
		if (option == 'r') {
			choice = false;
			Location.move(choice);
		}
		else if (option == 'l') {
			choice = true;
			Location.move(choice);
		}
		state = PlayerStates::WhatNow;

		break;
	
	case PlayerStates::Handel:

		std::cin >> option;

		if (option == 'b')//buy
		{
			episodes_machine.SpecialEpisod("buying");
		}
		else if (option == 'l')//leave
		{
			state = PlayerStates::playerState;
			std::cout << TEXTS[language][nothing_there];
		}
		break;

	case PlayerStates::Talk:

		std::cin >> option;

		if (option == 'f')//fight
		{
			state = PlayerStates::Fight;
		}
		else if (option == 'h')//handel
		{
			state = PlayerStates::Handel;
		}
		else if (option == 't')//take
		{
			episod = Episodes::Mission;
			state = PlayerStates::WhatNow;
		}
		else if (option == 'l')//leave
		{
			state = PlayerStates::WhatNow;
		}
		break;

	case PlayerStates::Fight:

		//std::cin >> option;		//To repair with NPC solution

		//if (player.getHP() <= 0)
		//{
		//	episodes_machine.SpecialEpisod("GameOver");
		//	gameOver = true;
		//	break;
		//}
		//else if (npc.getHP() <= 0) {

		//	episodes_machine.EpisodFunction(episod, state, npc, "FightWin", Language, Location);
		//	gameOver = false;
		//	break;
		//}

		//player.getHit(npc.Hit());

		//if (option == 'u')
		//{
		//	player.getStatistics->trove.info();
		//	std::cin >> option;
		//	npc.getHit(player.Hit());
		//	break;
		//}
		//else if (option == 'r')
		//{
		//	episodes_machine.EpisodFunction(episod, state, npc, "runAway", Language, Location);
		//	state = PlayerStates::playerState;
		//}
		//else if (option == 'd')
		//{
		//	episodes_machine.SpecialEpisod("dance");
		//}
		break;
	case PlayerStates::Dance:
		std::cin >> option;
		state = PlayerStates::WhatNow;
		break;
	}
	return EXIT_FAILURE;
}

Player & Game::getPlayer()
{
	return player;
}
