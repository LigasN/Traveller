#include "Settings_Body_TXT.h"
#include <map>
#include <fstream>
#include <string>
#include <vector>
#include "TEXT.h"
#include <iostream>

//Settings_Body_TXT::Settings_Body_TXT()
//{
//}
//
//
//Settings_Body_TXT::~Settings_Body_TXT()
//{
//}

std::map< std::string, int> Settings_Body_TXT::Load_Settings()
{
	std::map< std::string, int> settings;
	std::fstream file;
	file.open("SettingsFile.txt", std::ios::in);

	std::string line;

	while (getline(file, line))
	{//10 jest dla pierwszej kolumny

		char key;
		key = line[0];

		if (key == 'l')
		{
			if (line[10] == '0') {
				settings.insert(std::make_pair("language", Languages::Polish));
			}
			else if (line[10] == '1') {
				settings.insert(std::make_pair("language", Languages::English));
			}
			else if (line[10] == '2') {
				settings.insert(std::make_pair("language", Languages::Italian));
			}
			else if (line[10] == '3') {
				settings.insert(std::make_pair("language", Languages::French));
			}
		}

		else if (key == 'v')
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("level", x));
		}

		else if (key == 'e')
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("episod", x));
		}

		else if (key == 's') 
		{

			int x = (line[10] - '0') * 100 + (line[11] - '0') * 10 + line[12] - '0';
			settings.insert(std::make_pair("state", x));
		}
	}
	file.close();
	return settings;

}
