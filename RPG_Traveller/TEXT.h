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
	Shop = 12,
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
	Road6 = 25
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
	"<Lokacja>:\t",			//7
	"Co zamierzasz\n\tt -> Nie mam w planach sie tutaj dluzej zatrzymywac. Kontynuujmy podroz!\n"			//8
	"\ti -> Musze sprawdzic zapasy i chwile odpoczac.\n\tw -> Chodzmy sie "			
	"przejsc. Mam tutaj sprawe do zalatwienia.\n\td -> Mam ochote... Potanczyc!",		
	"Brawo! Znowu sie wyglupiles, a ludzie patrza z okien jak na idiote... Z reszta\ncalkiem slusznie..\n",			//9
	"\n<\tG; Game Over! ;D\t>\n",			//10
	"Brawo wygrales walke!\n",			//11
	"Zawartosc:\n",			//12
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
	},
	{
	"Nie oczekiwany b³¹d\n\n",																					//0
	"Witaj w grze!\n\n",																						//1
	"Wybierz jedn¹ z poni¿szych opcji:\n",																		//2
	"1- Start gry\n2- Zapisz grê\n3- Wczytaj grê\n4-WyjdŸ\n",													//3	
	"\n<\tG; Dziêki za grê! ;D\t>\n",																			//4
	"\nNieznajomy:\tWitaj Przyjacielu! Jak Ciê zw¹?\n\t-> ",													//5
	"\nNieŸle!\nNa mnie wo³aj¹ Byron\n",																		//6
	"\nByron:\tSkoro juz siê znamy to opowiem Ci troszkê o miejscu, w którym siê znajdujemy.\n",				//7
	"Wyl¹dowa³eœ na przedmieœciach Arum! Spore miasto, du¿o ludzi, opuszczonych zakamarków,\nciekawych miejsc i znalezisk.",//8
	" Jednak nie czas na zwiedzanie! Piwa napijemy siê póŸniej!\n",				//9
	"Czas na pierwsz¹ misjê! Twoim zadaniem jest siê dostaæ do lasu w miejscowosci zwanej Ghali.\n",			//10
	"Trzymaj mapê. Dziêki niej dowiesz siê jak tam dojœæ. Ja bêde tam na Ciebie czeka³.\n\n",						//11
	"\n\n<Byron odszed³ i znikn¹³ za rogiem ogrodzenia przy którym stoisz. Ogl¹dasz siê\n",							//12
	"<dookola i widzisz standardow¹ ulicê na przedmieœciach sporego miasta. Co teraz?>\n",						//13
	"1 -> Nie sluchasz nieznajomego ciecia, ktory niewiadomo sk¹d siê przyszwêda³ i dla\n",						//14
	"   pewnoœci idziesz w przeciwn¹ stronê ni¿ on poszed³.(full version)\n",									//15
	"2 -> Stwierdzasz, ¿e ma³y nie g³upi samouczek to ca³kiem dobry pomys³ i sprawdzasz mapê.\n",				//16
	"3 -> Rozgl¹dasz siê ko³o siebie jeszcze dok³adniej wierz¹c, ¿e diabe³ tkwi w szczegó³ach.(full version)\n",//17
	"4 -> Zaczynasz tañczyæ zbójnickiego\n",																	//18
	"<Lokacja>:\t",			//4
	"Co zamierzasz\n\tt -> Nie mam w planach siê tutaj d³u¿ej zatrzymywaæ. Kontynuujmy podró¿!\n",			//4
	"\ti -> Muszê sprawdziæ zapasy i chwilê odpocz¹æ.\n\tw -> Chodzmy siê ",			//4
	"przejœæ. Mam tutaj sprawê do za³atwienia.\n\td -> Mam ochotê... Potañczyæ!",			//4
	"Brawo! Znowu siê wyg³upi³eœ, a ludzie patrz¹ z okien jak na idiotê... Z reszt¹\nca³kiem s³usznie..\n",			//4
	"\n<\tG; Game Over! ;D\t>\n",			//4
	"Brawo wygra³eœ walkê!\n",			//4
	"Zawartoœæ:\n",			//4
	"Wybierz czym chcesz zaatakowaæ przeciwnika:\n",			//4
	"Wielkie miasto Arum\n",			//4
	"Przedmieœcia wielkiego miasta Arum\n",			//4
	"Tereny nadrzeczne w Ghali\n",			//4
	"Las w Ghali\n",			//4
	"\n",			//4
	"\n",			//4
	"\n",			//4
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