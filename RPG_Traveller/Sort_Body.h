#pragma once
#include "Trove.h"

class Sort_Body
{
public:
	virtual bool operator()(Trove t1, Trove t2) = 0;

	virtual ~Sort_Body() = default;
};
