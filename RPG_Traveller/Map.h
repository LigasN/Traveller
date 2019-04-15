#pragma once


#ifndef MAP
#define MAP

#include <string>
#include <fstream>
#include <iostream>


void Map()
{
	using namespace std; 
	{
		fstream file;
		file.open("Map.txt", ios::in);
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
		cout << endl;
	}
}

#endif