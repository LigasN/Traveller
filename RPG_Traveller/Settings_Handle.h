#pragma once
#include <memory>
#include "Settings_Body.h"
#include "Settings_Body_TXT.h"
#include "Settings_Body_XML.h"


/////////////////////////////////////////////////////////////////////////////
///
/// Class of Handle Body deisgn pattern 
///
/// Way to use:
///
///
/////////////////////////////////////////////////////////////////////////////

class Settings_Handle
{
private:
	using BodyPtr = std::unique_ptr<Settings_Body>;
	BodyPtr BodyObject;

public:

	enum class EHandledFormats {TXT, XML};

	Settings_Handle();
	Settings_Handle( EHandledFormats format);
	virtual ~Settings_Handle() = default;

	virtual std::map< std::string, int> Load_Settings();

};

