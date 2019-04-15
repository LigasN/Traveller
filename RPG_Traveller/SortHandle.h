#pragma once
#include <memory>
#include "Sort_Body.h"
#include "Sort_Body_VALUE.h"
#include "Sort_Body_DMG.h"
#include "Trove.h"

/////////////////////////////////////////////////////////////////////////////
///
/// Class of Handle Body deisgn pattern 
///
/// Way to use:
///
///
/////////////////////////////////////////////////////////////////////////////
class SortHandle
{
private:
	using BodyPtr = std::unique_ptr<Sort_Body>;
	BodyPtr BodyObject;

public:
	SortHandle();
	virtual ~SortHandle() = default;
	enum class EHandledSortingWays { VALUE, DMG };

	SortHandle(EHandledSortingWays format);

	virtual bool operator()(Trove t1, Trove t2);
};




