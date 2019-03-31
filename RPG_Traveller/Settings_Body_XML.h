#pragma once
#include "Settings_Body.h"
#include <map>

class Settings_Body_XML : public Settings_Body
{
public:
	virtual std::map< std::string, int>  Load_Settings() override;
};

