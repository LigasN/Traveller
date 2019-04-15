#pragma once


/////////////////////////////////////////////////////////////////////////////
// HEADERS
/////////////////////////////////////////////////////////////////////////////
#include "C_TEXTS.h"
#include "Enums.h"
#include "NPC.h"
#include <assert.h>

/////////////////////////////////////////////////////////////////////////////
///
///Struct which makes every Episode for player
///
///To work needs int type information about which episode should become 
///
///Episodes:
///	-First_moments	-First moments on the world
///
/////////////////////////////////////////////////////////////////////////////
struct EpisodesMachine
{

	/////////////////////////////////////////////////////////////////////////////
	///
	/// Unique pointer to C_TEXTS class object to load texts from file
	/// and handle with it
	///
	/////////////////////////////////////////////////////////////////////////////
	std::shared_ptr <C_TEXTS> TEXTS_object;

	///////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Function in EpisodesMachine struct
	///
	/// Aim: Update texts when called
	///
	/// Way: -Get the smart pointer to the new object of C_TEXTS class
	///	 	 -Overwrite old TEXTS_object with new one with new settings
	///
	/// Returns: Boolean true if success, false if not
	///
	///////////////////////////////////////////////////////////////////////////////////////////////
	void UpdateText(std::shared_ptr <C_TEXTS> newTEXTS_object)
	{
		TEXTS_object = newTEXTS_object;
	}

	///////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Enum in EpisodesMachine struct
	///
	/// Aim: Storage names of special sytuations when Episodes are called
	///
	///////////////////////////////////////////////////////////////////////////////////////////////
	enum class SpecialSytuations
	{
		none,
		DerelictHause,
		Trove,
		buying,
		GameOver,
		FightWin,
		Nothing_to_find,
		Hitting,
		RunAway,
		show_item_type,
		staty_show,
		show_your_troves,
		show_backpack_capacity,
		show_persuasion_power,
		show_respect,
		show_stamina,
		show_strength,
		show_HP,
		show_item_type_sword,
		show_item_amount,
		show_item_strength,
		show_item_DMG,
		show_item_value,
		show_item_maxAmount,
		added_trove,
		overloadedTrove,
		overloadedTrove2
	};

	/////////////////////////////////////////////////////////////////////////////
	///
	///Struct which makes every Episode for player
	///
	///To work needs int type information about which episode should become 
	///
	///Episodes:
	///	-First_moments	-First moments on the world
	///
	/////////////////////////////////////////////////////////////////////////////
	void EpisodFunction(Episodes & Epi, PlayerStates & state, NPC npc, SpecialSytuations SpecialInfo, Locations iLocation) {
		int choice{};

		TEXTS_object->writeText(C_TEXTS::TEXT_ID::Location_Name);
		if (iLocation == Locations::City) {
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::Location_Name1);
		}
		else if (iLocation == Locations::Suburbs) {

			TEXTS_object->writeText(C_TEXTS::TEXT_ID::Location_Name2);
		}
		else if (iLocation == Locations::Riverside) {

			TEXTS_object->writeText(C_TEXTS::TEXT_ID::Location_Name3);
		}
		else if (iLocation == Locations::Forest) {

			TEXTS_object->writeText(C_TEXTS::TEXT_ID::Location_Name4);
		}

		switch (state) {
		case PlayerStates::WhatNow:

			switch (Epi) {

			case Episodes::First_moments:
				if (iLocation == Locations::City) {
					TEXTS_object->writeText(C_TEXTS::TEXT_ID::Byron_name);
				}
				else if (iLocation == Locations::Suburbs) {

					TEXTS_object->writeText(C_TEXTS::TEXT_ID::First_moments_traveling);
				}
				else if (iLocation == Locations::Riverside) {

					TEXTS_object->writeText(C_TEXTS::TEXT_ID::First_moments_ending);

				}
				else if (iLocation == Locations::Forest) {

					TEXTS_object->writeText(C_TEXTS::TEXT_ID::First_moments_traveling);
				}

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

				break;

			case Episodes::Mission:
				break;

			}

		case PlayerStates::Dance:

			TEXTS_object->writeText(C_TEXTS::TEXT_ID::Enum_Dance); //Na razie tyle ogolne do wszystkich episodow do rozszerzenia potem
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

	void SpecialEpisod(SpecialSytuations SpecialSytuation)
	{
		switch (SpecialSytuation)
		{
		case SpecialSytuations::DerelictHause:
			//rand historys about derelict hauses
			break;

		case SpecialSytuations::Trove:
			//rand historys about troves
			break;

		case SpecialSytuations::buying:
			//buying geting troves and givig ones on player and NPC
			break;

		case SpecialSytuations::GameOver:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::LostGame);
			break;

		case SpecialSytuations::FightWin:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::WinFight);
			system("pause");
			system("cls");
			break;

		case SpecialSytuations::Nothing_to_find:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::nothing_there);
			break;

		case SpecialSytuations::Hitting:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::Hitting);
			break;

		case SpecialSytuations::staty_show:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::staty_show);
			break;

		case SpecialSytuations::show_HP:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_HP);
			break;

		case SpecialSytuations::show_strength:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_strength);
			break;

		case SpecialSytuations::show_stamina:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_stamina);
			break;

		case SpecialSytuations::show_respect:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_respect);
			break;

		case SpecialSytuations::show_persuasion_power:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_persuasion_power);
			break;

		case SpecialSytuations::show_backpack_capacity:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_backpack_capacity);
			break;

		case SpecialSytuations::show_your_troves:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_your_troves);
			break;

		case SpecialSytuations::show_item_type_sword:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_item_type_sword);
			break;

		case SpecialSytuations::show_item_amount:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_item_amount);
			break;

		case SpecialSytuations::show_item_strength:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_item_strength);
			break;

		case SpecialSytuations::show_item_DMG:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_item_DMG);
			break;

		case SpecialSytuations::show_item_value:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_item_value);
			break;

		case SpecialSytuations::show_item_maxAmount:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::show_item_maxAmount);
			break;

		case SpecialSytuations::added_trove:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::added_trove);
			break;

		case SpecialSytuations::overloadedTrove:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::overloadedTrove);
			break;

		case SpecialSytuations::overloadedTrove2:
			TEXTS_object->writeText(C_TEXTS::TEXT_ID::overloadedTrove2);
			break;

		}
	}
};

