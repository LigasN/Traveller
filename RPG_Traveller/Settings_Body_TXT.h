#pragma once
#include "Settings_Body.h"

class Settings_Body_TXT : public Settings_Body
{
public:
	virtual std::map< std::string, int> Load_Settings() override;
};

