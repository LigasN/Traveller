#include "Settings_Handle.h"
#include <assert.h>


Settings_Handle::Settings_Handle()
{
	BodyObject = std::make_unique<Settings_Body_TXT>();
}

Settings_Handle::Settings_Handle(EHandledFormats format)
{
	switch (format)
	{
	case EHandledFormats::TXT:
		BodyObject = std::make_unique<Settings_Body_TXT>();
		break;

	case EHandledFormats::XML:
		BodyObject = std::make_unique< Settings_Body_XML>();
		break;
	
	default:
		assert(false);
		break;
	}
}

//Settings_Handle::~Settings_Handle(){}

std::map<std::string, int> Settings_Handle::Load_Settings()
{
	assert(BodyObject);
	return BodyObject->Load_Settings();
}
