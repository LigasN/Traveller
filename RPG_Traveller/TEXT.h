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
	"Nie widz� tutaj niczego interesuj�cego...\n",			//18
	"\n\n\tWedrowka z miasta Arum na jego przedmiescia...\n\n",			//19
	"\n\n\tWedrowka z przedmiesc Arum na tereny nadrzeczne Ghali...\n\n",			//20
	"\n\n\tWedrowka z przedmiesc miasta Arum do jego centrum...\n\n",			//21
	"\n\n\tWedrowka z terenow nadrzecznych Ghali do lasow w Ghali...\n\n",			//22
	"\n\n\tWedrowka z terenow nadrzecznych Ghali do przedmiesc miasta Arum...\n\n",			//23
	"\n\n\tWedrowka po nieskonczonym lesie w Ghali...\n\n",			//24
	"\n\n\tWedrowka z lasow w Ghali do terenow nadrzeczych tejze miejscowosci...\n\n",			//25
	},
	{
	"Nie oczekiwany b��d\n\n",																					//0
	"Witaj w grze!\n\n",																						//1
	"Wybierz jedn� z poni�szych opcji:\n",																		//2
	"1- Start gry\n2- Zapisz gr�\n3- Wczytaj gr�\n4-Wyjd�\n",													//3	
	"\n<\tG; Dzi�ki za gr�! ;D\t>\n",																			//4
	"\nNieznajomy:\tWitaj Przyjacielu! Jak Ci� zw�?\n\t-> ",													//5
	"\nNie�le!\nNa mnie wo�aj� Byron\n",																		//6
	"\nByron:\tSkoro juz si� znamy to opowiem Ci troszk� o miejscu, w kt�rym si� znajdujemy.\n",				//7
	"Wyl�dowa�e� na przedmie�ciach Arum! Spore miasto, du�o ludzi, opuszczonych zakamark�w,\nciekawych miejsc i znalezisk.",//8
	" Jednak nie czas na zwiedzanie! Piwa napijemy si� p�niej!\n",				//9
	"Czas na pierwsz� misj�! Twoim zadaniem jest si� dosta� do lasu w miejscowosci zwanej Ghali.\n",			//10
	"Trzymaj map�. Dzi�ki niej dowiesz si� jak tam doj��. Ja b�de tam na Ciebie czeka�.\n\n",						//11
	"\n\n<Byron odszed� i znikn�� za rogiem ogrodzenia przy kt�rym stoisz. Ogl�dasz si�\n",							//12
	"<dookola i widzisz standardow� ulic� na przedmie�ciach sporego miasta. Co teraz?>\n",						//13
	"1 -> Nie sluchasz nieznajomego ciecia, ktory niewiadomo sk�d si� przyszw�da� i dla\n",						//14
	"   pewno�ci idziesz w przeciwn� stron� ni� on poszed�.(full version)\n",									//15
	"2 -> Stwierdzasz, �e ma�y nie g�upi samouczek to ca�kiem dobry pomys� i sprawdzasz map�.\n",				//16
	"3 -> Rozgl�dasz si� ko�o siebie jeszcze dok�adniej wierz�c, �e diabe� tkwi w szczeg�ach.(full version)\n",//17
	"4 -> Zaczynasz ta�czy� zb�jnickiego\n",																	//18
	"<Lokacja>:\t",			//4
	"Co zamierzasz\n\tt -> Nie mam w planach si� tutaj d�u�ej zatrzymywa�. Kontynuujmy podr�!\n",			//4
	"\ti -> Musz� sprawdzi� zapasy i chwil� odpocz��.\n\tw -> Chodzmy si� ",			//4
	"przej��. Mam tutaj spraw� do za�atwienia.\n\td -> Mam ochot�... Pota�czy�!",			//4
	"Brawo! Znowu si� wyg�upi�e�, a ludzie patrz� z okien jak na idiot�... Z reszt�\nca�kiem s�usznie..\n",			//4
	"\n<\tG; Game Over! ;D\t>\n",			//4
	"Brawo wygra�e� walk�!\n",			//4
	"Zawarto��:\n",			//4
	"Wybierz czym chcesz zaatakowa� przeciwnika:\n",			//4
	"Wielkie miasto Arum\n",			//4
	"Przedmie�cia wielkiego miasta Arum\n",			//4
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