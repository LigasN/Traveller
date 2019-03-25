#pragma once


/////////////////////////////////////////////////////////////////////////////
// HEADERS
/////////////////////////////////////////////////////////////////////////////
#include "TEXT.h"
#include <iostream>
#include "Enums.h"
#include "NPC.h"

/////////////////////////////////////////////////////////////////////////////
///
///Function which makes every Episode for player
///
///To work needs int type information about which episode should become 
///
///Episodes:
///	-First_moments	-First moments on the world
///
/////////////////////////////////////////////////////////////////////////////
struct EpisodesMachine {
	void EpisodFunction(Episodes & Epi, PlayerStates & state, NPC & npc, const char* SpecialInfo, int language, Locations Location) {
		int choice{};

		std::cout << TEXTS[language][Location_Name];
		if (Location == Locations::City) {
			std::cout << TEXTS[language][Location_Name1];
		}
		else if (Location == Locations::Suburbs) {

			std::cout << TEXTS[language][Location_Name2];
		}
		else if (Location == Locations::Riverside) {

			std::cout << TEXTS[language][Location_Name3];
		}
		else if (Location == Locations::Forest) {

			std::cout << TEXTS[language][Location_Name4];
		}

		switch (state) {
		case PlayerStates::WhatNow:

			switch (Epi) {

			case Episodes::First_moments:
				std::cout << TEXTS[language][Byron_name];
				break;
			case Episodes::Random_walking_episodes:
				break;

			case Episodes::Mission:

				break;
			}

		case PlayerStates::playerState:

			switch (Epi) {

			case Episodes::First_moments:
				break;
			case Episodes::Random_walking_episodes:
				break;

			case Episodes::Mission:
				break;

			}
			break;
		case PlayerStates::Traveling:

			switch (Epi) {

			case Episodes::First_moments:
				break;
			case Episodes::Random_walking_episodes:

				break;
			case Episodes::Mission:
				break;

			}
			break;
		case PlayerStates::Walk:

			//opis co widzisz, do wybru jakies rzeczy do wziecia derelicthousy itp pod e, pod 

			switch (Epi) {

			case Episodes::First_moments:
				break;
			case Episodes::Random_walking_episodes:

				break;
			case Episodes::Mission:
				break;

			}
			break;
		case PlayerStates::Talk:

			switch (Epi) {

			case Episodes::First_moments:
				break;
			case Episodes::Random_walking_episodes:

				break;
			case Episodes::Mission:

				break;
			}
			break;
		case PlayerStates::Handel:

			//handel talking stories

			switch (Epi) {

			case Episodes::First_moments:
				break;
			case Episodes::Random_walking_episodes:
				break;
			case Episodes::Mission:
				break;
			}
			break;
		case PlayerStates::Fight:

			switch (Epi) {

			case Episodes::First_moments:
				break;
			case Episodes::Random_walking_episodes:
				if (SpecialInfo == "") {

				}
				else if (SpecialInfo == "RunAway") {

				}
				else if (SpecialInfo == "WinFight") {

				}
				break;
			case Episodes::Mission:
				break;
			}

		case PlayerStates::Dance:

			std::cout << TEXTS[language][Enum_Dance];			//Na razie tyle ogolne do wszystkich episodow do rozszerzenia potem
			switch (Epi) {

			case Episodes::First_moments:
				break;
			case Episodes::Random_walking_episodes:
				break;
			case Episodes::Mission:

				break;
			}
			break;
		}
	}

	void SpecialEpisod(const char *SpecialSytuation)
	{
		if (SpecialSytuation == "DerelictHause") {

			//rand historys about derelict hauses
		}
		else if (SpecialSytuation == "Trove") {
			//rand historys about troves
		}
		else if (SpecialSytuation == "buying") {
			//buying geting troves and givig ones on player and NPC
		}
		else if (SpecialSytuation == "GameOver") {
			//rand historys about dancing
			std::cout << TEXTS[language][LostGame];
		}
		else if (SpecialSytuation == "FightWin") {
			//rand historys about dancing
			std::cout << TEXTS[language][WinFight];
			system("pause");
			system("cls");
		}
	}
};
