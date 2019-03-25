#pragma once

#include "Trove.h"
#include <vector>

class TroveBox
{
private:
	std::vector<Trove> TrovesIn;
public:
	TroveBox();
	TroveBox(const char * NPCtype);
	~TroveBox();
	void info();
	int getSize();
	Trove GetAndDeleteTrove();
	Trove& getTroveInfo(int option);
	Trove getTrove(int option);
	void addTrove(Trove& toAdd);

};

