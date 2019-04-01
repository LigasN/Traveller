#pragma once
#include <time.h>

#ifndef MXRN_MACHINE
#define MXRN_MACHINE


/////////////////////////////////////////////////////////////////////////////
///
///Marsaglia's Xorshift Random Numbers
///
///Function which cast lots about numbers.
///Caught numbers are big so You can do this:
///	i = mxrn.getNumber() & 0xFFFFFFF;
/// where "i" is an example variable, mxrn is an object of this struct, 
///	getNumber is the main function of this struct and & 0xFFFFFFF changes
///	order of magnitude to amount of "F" + 1.
///
///
/////////////////////////////////////////////////////////////////////////////

struct MXRN 
{
	/////////////////////////////////////////////////////////////////////////////
	///
	///Start value and i dont try change it yet so...
	///I know only that it must be different from 0.
	///
	/////////////////////////////////////////////////////////////////////////////
	unsigned long startValue{ (unsigned long)time(nullptr) & 0xFF };


	/////////////////////////////////////////////////////////////////////////////
	///	
	///Main function in this struct. 
	///Gets void and gives (unsigned long) random number.
	///Caught numbers are big so You can do this:
	///	i = mxrn.getNumber() & 0xFFFFFFF;
	/// where "i" is an example variable, mxrn is an object of this struct, 
	///	getNumber is the main function of this struct and & 0xFFFFFFF changes
	///	order of magnitude to amount of "F" + 1.
	///
	/////////////////////////////////////////////////////////////////////////////
	
	unsigned long getNumber()
	{
		startValue ^= startValue << 13;
		startValue ^= startValue >> 17;
		startValue ^= startValue << 5;

		return startValue;
	}
};


#endif // !MXRN_MACHINE