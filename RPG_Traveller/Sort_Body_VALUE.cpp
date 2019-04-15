#include "Sort_Body_VALUE.h"


bool Sort_Body_VALUE::operator()(Trove t1, Trove t2)
{
	if(t1.getValue() < t2.getValue()) return true;
	else return false;
}