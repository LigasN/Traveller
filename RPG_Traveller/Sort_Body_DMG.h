#pragma once
#include "Sort_Body.h"
#include "Trove.h"

class Sort_Body_DMG : public Sort_Body
{
public:
	virtual bool operator()(Trove t1, Trove t2) override;
};
