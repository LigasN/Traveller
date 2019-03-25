#pragma once
#include "TroveBox.h"


/////////////////////////////////////////////////////////////////////////////
///
///Struct with figure's statistics 
///
///Informations: -nick
///				 -Hp,  
///				 -strength, 
///				 -stamina, 
///				 -respect, 
///				 -persuasion_power 
///				 -backpack_capacity
///
///Default value of all kids informations is (int) 100 (like 100%)
///exept for nick which type is char. 
///
/////////////////////////////////////////////////////////////////////////////
struct Statistics
{
	int HP = 100;
	int strength = 100;
	int stamina = 100;
	int respect = 100;
	int persuasion_power = 100;
	const char *nick{};
	TroveBox trove;
	int backpack_capacity = 10;
};

