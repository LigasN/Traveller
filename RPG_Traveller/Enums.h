#pragma once

#ifndef EnumBox
#define EnumBox

/////////////////////////////////////////////////////////////////////////////
///
///Enum with names of episodes
///
/////////////////////////////////////////////////////////////////////////////
enum Episodes {
	First_moments = 0,
	Random_walking_episodes = 1,
	Mission = 2,

};

typedef enum {
	Suburbs = 0,
	City = 1,
	Forest = 2,
	Riverside = 3,
	DerelictHouse = 4
} Locations;

enum PlayerStates {
	playerState = 0,
	Traveling = 1,
	Talk = 2,
	Handel = 3,
	Fight = 4,
	Walk = 5,
	WhatNow = 6,
	Dance = 7
};

enum NPCTypes {
	EAnimal,
	ECriminal,
	EBystander,
	EWorker,
	EDealer,
	ESmith,
	ECity_official,
	EJournalist,
	EPlayer
};

enum Items {
	Sword,

};

#endif	//EnumBox