#pragma once
#include <map>
#include <string>

class Settings_Body
{
public:
	virtual std::map< std::string, int>  Load_Settings() = 0;
	virtual ~Settings_Body() = default;
};

