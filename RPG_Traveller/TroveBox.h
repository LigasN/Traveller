//#pragma once
//
//#include "Trove.h"
//#include <vector>
//#include <iostream>
//#include "TEXT.h"
//#include "Game.h"
//#include "Enums.h"
//#include "Marsaglia's_Xorshift_Random_Numbers.h"
//
//class TroveBox
//{
//private:
//	std::vector<Trove> TrovesIn;
//	int recipient{};
//	int troveLimit{};
//	int amountOfTroves{};
//
//public:
//	/////////////////////////////////////////////////////////////////////////////
//	///
//	///Class which stores Troves == Items for player , npcs or places	
//	///
//	///	input: none
//	///	working way:	This constructor makes default for everything TroveBox
//	///
//	///	Tip:	It's better to copy on him something more iteresting
//	///
//	/////////////////////////////////////////////////////////////////////////////
//	TroveBox();
//
//	/////////////////////////////////////////////////////////////////////////////
//	///
//	///Class which stores Troves == Items for player , npcs or places	
//	///
//	///	input:
//	///			-(int)recipient	- can be taken by enum with NPCTypes/Locations
//	///			-(bool)place	- ask what type of recipient You want place 
//	///					   if true or npc/player if false
//	///	working way:	Makes random backpack for location/npcs/player
//	///
//	/////////////////////////////////////////////////////////////////////////////
//	TroveBox(int recipient, bool place);
//	~TroveBox();
//	int makeDMG();
//	void info();
//	int getSize();
//	Trove GetAndDeleteTrove();
//	void getTroveInfo(int option);
//	std::vector<std::string> getTroveString(int option);
//	Trove getTrove(int option);
//	bool addTrove(Trove& toAdd);
//
//};

#pragma once

#include "Trove.h"
#include <vector>
#include <iostream>
#include "TEXT.h"
#include "Enums.h"
#include "Marsaglia's_Xorshift_Random_Numbers.h"

class TroveBox
{
private:
	std::vector<Trove> TrovesIn;
	int recipient{};
	int troveLimit{};
	int amountOfTroves{};

public:
	/////////////////////////////////////////////////////////////////////////////
	///
	///Class which stores Troves == Items for player , npcs or places	
	///
	///	input: none
	///	working way:	This constructor makes default for everything TroveBox
	///
	///	Tip:	It's better to copy on him something more iteresting
	///
	/////////////////////////////////////////////////////////////////////////////
	TroveBox();

	/////////////////////////////////////////////////////////////////////////////
	///
	///Class which stores Troves == Items for player , npcs or places	
	///
	///	input:
	///			-(int)recipient	- can be taken by enum with NPCTypes/Locations
	///			-(bool)place	- ask what type of recipient You want place 
	///					   if true or npc/player if false
	///	working way:	Makes random backpack for location/npcs/player
	///
	/////////////////////////////////////////////////////////////////////////////
	TroveBox(int recipient, bool place);
	~TroveBox();
	int getSize();
	int makeDMG();
	void info();
	Trove GetAndDeleteTrove();
	void getTroveInfo(int option);
	std::vector<std::string> getTroveString(int option);
	Trove getTrove(int option);
	bool addTrove(Trove& toAdd);

};