#pragma once

#ifndef TEXTS_MATRIX
#define TEXTS_MATRIX

typedef enum {
	Error = 0,
	Greeting = 1,
	Choosing_options = 2,
	Menu_options = 3,
	Thanks_fP = 4,
	Nick = 5,
	Byron_name = 6,
	Location_Name = 7,
	WhatNow_choice1 = 8,
	Enum_Dance = 9,
	LostGame = 10,
	WinFight = 11,
	Shop = 12,								//puste
	Hitting = 13,
	Location_Name1 = 14,
	Location_Name2 = 15,
	Location_Name3 = 16,
	Location_Name4 = 17,
	nothing_there = 18,
	Road = 19,
	Road1 = 20,
	Road2 = 21,
	Road3 = 22,
	Road4 = 23,
	Road5 = 24,
	Road6 = 25,
	First_moments_ending = 26,
	First_moments_traveling = 27,
	empty = 28,
	added_trove = 29,
	overloadedTrove = 30,
	overloadedTrove2 = 31,
	NotImplementedException = 32,
	staty_show = 33,
	show_HP = 34,
	show_strength = 35,
	show_stamina = 36,
	show_respect = 37,
	show_persuasion_power = 38,
	show_backpack_capacity = 39,
	show_your_troves = 40,
	show_item_type = 41,
	show_item_type_sword = 42,
	show_item_DMG = 43,
	show_item_amount = 44,
	show_item_strength = 45,
	show_item_value = 46,
	show_item_maxAmount = 47


} TEXT_ID;

typedef enum Languages {
	Polish = 0,
	English = 1,
	Italian = 2,
	French = 3
} LANGUAGE_ID;

static int language = 0;

static const char* TEXTS[4][100]{
	{
	"Nie oczekiwany blad\n\n",																					//0
	"Witaj w grze!\n\n",																						//1
	"Wybierz jedna z ponizszych opcji:\n",																		//2
	"1- Start gry\n2- Zapisz gre\n3- Wczytaj gre\n4-Wyjdz\n",													//3	
	"\n<\tG; Dzieki za gre! ;D\t>\n",																			//4
	"Nieznajomy:\tWitaj Przyjacielu! Jak Cie zwa?\n\t-> ",													//5
	"\nNiezle!\nNa mnie wolaja Byron\n"																		//6
	"\nByron:\tSkoro juz sie znamy to opowiem Ci troche o miejscu, w ktorym sie znajdujemy.\n"				
	"Wyladowales na przedmiesciach Arum! Spore miasto, duzo ludzi, opuszczonych zakamarkow,\nciekawych miejsc i znalezisk."
	" Jednak nie czas na zwiedzanie! Piwa napijemy sie pozniej!\n"		
	"Czas na pierwsza misje! Twoim zadaniem jest sie dostac do lasu w miejscowosci zwanej Ghali.\n"			
	"Trzymaj mape. Dzieki niej dowiesz sie jak tam dojsc. Ja bede tam na Ciebie czekal.\n"						
	"\n<Byron odszedl i zniknal za rogiem ogrodzenia przy ktorym stoisz. Ogladasz sie\n"						
	"<dookola i widzisz standardowa ulice na przedmiesciach sporego miasta. Co teraz?>\n"					
	"w -> Nie sluchasz nieznajomego ciecia, ktory niewiadomo skad sie przyszwedal i dla\n"					
	"     pewnosci idziesz w przeciwna strone niz on poszedl.(full version)\n"								
	"t -> Stwierdzasz, ze maly nie glupi samouczek to calkiem dobry pomysl i sprawdzasz mape.\n"				
	"l -> Rozgladasz sie kolo siebie jeszcze dokladniej wierzac, ze diabel tkwi w szczegolach.(full version)\n"
	"i -> Przegladasz stan twojego plecaka i swoj rowniez\n"
	"d -> Zaczynasz tanczyc zbojnickiego\n",																	
	"\n<Lokacja>:\t",			//7
	"Co zamierzasz\n\tt -> Nie mam w planach sie tutaj dluzej zatrzymywac. Kontynuujmy podroz!\n"			//8
	"\ti -> Musze sprawdzic zapasy i chwile odpoczac.\n\tw -> Chodzmy sie "			
	"przejsc. Mam tutaj sprawe do zalatwienia.\n\td -> Mam ochote... Potanczyc!",		
	"Brawo! Znowu sie wyglupiles, a ludzie patrza z okien jak na idiote... Z reszta\ncalkiem slusznie..\n",			//9
	"\n<\tG; Game Over! ;D\t>\n",			//10
	"Brawo wygrales walke!\n",			//11
	"\n",			//12
	"Wybierz czym chcesz zaatakowac przeciwnika:\n",			//13
	"Wielkie miasto Arum\n\n",			//14
	"Przedmiescia wielkiego miasta Arum\n\n",			//15
	"Tereny nadrzeczne w Ghali\n\n",			//16
	"Las w Ghali\n\n",			//17
	"Nie widzê tutaj niczego interesuj¹cego...\n",			//18
	"\n\n\tWedrowka z miasta Arum na jego przedmiescia...\n\n",			//19
	"\n\n\tWedrowka z przedmiesc Arum na tereny nadrzeczne Ghali...\n\n",			//20
	"\n\n\tWedrowka z przedmiesc miasta Arum do jego centrum...\n\n",			//21
	"\n\n\tWedrowka z terenow nadrzecznych Ghali do lasow w Ghali...\n\n",			//22
	"\n\n\tWedrowka z terenow nadrzecznych Ghali do przedmiesc miasta Arum...\n\n",			//23
	"\n\n\tWedrowka po nieskonczonym lesie w Ghali...\n\n",			//24
	"\n\n\tWedrowka z lasow w Ghali do terenow nadrzeczych tejze miejscowosci...\n\n",			//25
	"\n\nByron: Brawo! Ukonczyles pierwsza misje! Wiecej w pelnej wersji gry\ne- EXIT\n",			//26
	"\n\nt- podrozujesz dalej\n",
	"\n\tWlasnie wykorzystales ostatnia sztuke!\n",
	"\nDodano przedmiot\n",
	"\nZ powodu przepelnienia dodano tylko ",
	"przedmiotow.\n",
	"\n\nNotImplementedException\n\n",
	"\nTwoje statystyki : \n\t--> Level:\t\t",
	"\n\t--> HP:\t\t\t",
	"\n\t--> sila:\t\t",
	"\n\t--> wytrzymalosc:\t",
	"\n\t--> szacunek:\t\t",
	"\n\t--> sila perswazji:\t",
	"\n\t--> pojemnosc plecaka:\t",
	"\n\t--> Twoj dobytek:\t",
	"\n\t\t--> typ:\t\t",
	"Miecz",
	"\n\t\t--> zadawane obrazenia:\t",
	"\n\t\t--> liczba:\t\t",
	"\n\t\t--> zuzycie:\t\t",
	"\n\t\t--> wartosc:\t\t",
	"\n\t\t--> przenosnosc:\t",

	},
	{
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n"			//4
	},
	{
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n"			//4
	},
	{
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
	"\n"			//4
	}
};

#endif	//TEXTS_MATRIX