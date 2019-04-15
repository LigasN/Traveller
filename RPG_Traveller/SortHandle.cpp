#include "SortHandle.h"
#include <assert.h>


SortHandle::SortHandle()
{
	BodyObject = std::make_unique<Sort_Body_DMG>();
}


SortHandle::SortHandle(EHandledSortingWays format)
{
	switch (format)
	{
	case EHandledSortingWays::VALUE:
		BodyObject = std::make_unique<Sort_Body_VALUE>();
		break;

	case EHandledSortingWays::DMG:
		BodyObject = std::make_unique<Sort_Body_DMG>();
		break;

	default:
		assert(false);
		break;
	}
}

bool SortHandle::operator()(Trove t1, Trove t2)
{
	assert(BodyObject);
	return BodyObject->operator()(t1, t2);
}

