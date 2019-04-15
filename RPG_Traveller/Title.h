#pragma once

#ifndef  TITLE
#define TITLE


#include <string>
#include <fstream>
#include <iostream>


void Title() {
	using namespace std; {
		system("cls");
		fstream file;
		file.open("Title.txt", ios::in);
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
		cout << endl;
	}
}
#endif //  TITLE