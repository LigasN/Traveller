#include "NPC.h"
#include <iostream>


NPC::NPC()
{
	const char * names[26] = {
		"Alarin",
		"Zolt",
		"Zalwen",
		"Nymon",
		"Ilwen",
		"Egar",
		"Oti",
		"Reiv",
		"Thial",
		"Neiteneth",
		"Urlish",
		"Tukil",
		"Gwil",
		"Isah",
		"Ash",
		"Neivi",
		"Ilani",
		"Tis",
		"Leifi",
		"Noa",
		"Cathi",
		"Thuara",
		"Del",
		"Nabi",
		"Nani" };

	int ticket{};
	static int ticketTab[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	static int j = 0;
	int amount_of_male_names = 15;
	int amount_of_female_names = 10;

	
	bool repeat{};
	int liczba_losowan{};
	do {
		liczba_losowan++;
		repeat = false;
		//std::cout << "losowanie" << std::endl;
		ticket = rand() % 25;
		for (int i = 0; i < j; i++) {
			/*std::cout << "sprawdzanie czy:\t"<< ticket <<" = " << ticketTab[i] << std::endl;*/
			if (ticket == ticketTab[i]) { repeat = true; /*std::cout << "powtorzone" << std::endl;*/ break; }
		}
		if (liczba_losowan == amount_of_male_names + amount_of_female_names)
		{
			std::cout << "\n\nProgrammer info:\tresseting tab of used names\n\n" << std::endl;
			for (int i = 0; i < amount_of_male_names + amount_of_female_names; i++) {
				ticketTab[i] = -1;
			}
		}
	} while (repeat);
	

	ticketTab[j] = ticket;
	//std::cout << "\t\t\t\tticketTab= " << ticketTab[j] << std::endl;
	j++;

	statistics.nick = names[ticket];;
}


NPC::~NPC()
{
}

void NPC::Talk()
{
}

int NPC::Hit()
{
	return 0;
}

int NPC::getHP() {
	return statistics.HP;
}

void NPC::getHit(int DMG)
{
	statistics.HP -= DMG;
}


Trove NPC::give(int value)
{
	Trove toGive;
	char answer{};
	do {
		std::cout << "Bêdzie?\nT -> tak\t N -> nie" << std::endl;//get to texts
		toGive = statistics.trove.GetAndDeleteTrove();//sprawdz to
		std::cin >> answer;
	} while (answer == 'N');

	return toGive;
}

void NPC::get(Trove toAdd)
{
	statistics.trove.addTrove(toAdd);
}

void NPC::statisticsInfo()
{
	//take to text.h
	std::cout << "-->HP:\t" << statistics.HP << std::endl;
	std::cout << "-->si³a:\t" << statistics.strength << std::endl;
	std::cout << "-->wytrzyma³oœæ:\t" << statistics.stamina << std::endl;
	std::cout << "-->szacunek:\t" << statistics.respect << std::endl;
	std::cout << "-->si³a perswazji:\t" << statistics.persuasion_power << std::endl;
	std::cout << "-->pojemnoœæ plecaka:\t" << statistics.backpack_capacity << std::endl;
}


void NPC::troveInfo()
{
	statistics.trove.info();
	std::cout << std::endl << std::endl;
}
