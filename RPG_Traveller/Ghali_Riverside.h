#pragma once
#include "TroveBox.h"
#include "LocationContext.h"
#include "LocationState.h"
#include <iostream>
#include "TEXT.h"
#include "Game.h"
#include "Enums.h"
#include "Arum_Suburbs.h"
#include "Ghali_Forest.h"

class Ghali_Riverside : public LocationState
{
public:
	Ghali_Riverside();
	~Ghali_Riverside();
/*
	void goLeft(LocationContext * newOne);
	void goRight(LocationContext * newOne);*/


	virtual int getName();
	virtual void info();
};

