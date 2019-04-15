#include "Sort_Body_DMG.h"

bool Sort_Body_DMG::operator()(Trove t1, Trove t2)
{
	if(t1.getDMG() < t2.getDMG()) return true;
	else return false;
}
