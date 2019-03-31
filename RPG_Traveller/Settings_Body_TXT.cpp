#include "Settings_Body_TXT.h"
#include <map>
#include <fstream>
#include <string>
#include <vector>
#include "TEXT.h"

Settings_Body_TXT::Settings_Body_TXT()
{
}


Settings_Body_TXT::~Settings_Body_TXT()
{
}

std::map< std::string, int> Settings_Body_TXT::Load_Settings()
{
	std::map< std::string, int> settings;
	std::ifstream ifile;
	ifile.open("Settings.txt");
	std::string line;
	std::string key;
	while (ifile >> line)
	{//10 jest dla pierwszej kolumny

		for (int i{}; i <= 10; i++) key += line[i];
				
		if (key == "language")
		{
			if (line[11] == '0') {
				settings.insert(std::make_pair(key, Languages::Polish));
			}
			else if (line[11] == '1') {
				settings.insert(std::make_pair(key, Languages::English));
			}
			else if (line[11] == '2') {
				settings.insert(std::make_pair(key, Languages::Italian));
			}
			else if (line[11] == '3') {
				settings.insert(std::make_pair(key, Languages::French));
			}
		}

		if (key == "level")
		{
			int x = line[11]*100 + line[12]*10 + line[13] - '0';
			settings.insert(std::make_pair(key, x));
		}

		if (key == "episodes")
		{
			int x = line[11] * 100 + line[12] * 10 + line[13] - '0';
			settings.insert(std::make_pair(key, x));
		}

		if (key == "state") 
		{
			int x = line[11] * 100 + line[12] * 10 + line[13] - '0';
			settings.insert(std::make_pair(key, x));
		}
	}
	return settings;

}
