#include "TroveBox.h"



TroveBox::TroveBox()
{
}

/////////////////////////////////////////////////////////////////////////////
///
///Class which stores Troves == Items for player , npcs or places
///
///	input:
///		-(int)recipient	- can be taken by enum with NPCTypes/Locations
///		-(bool)place	- ask what type of recipient You want place 
///			if true or npc/player if false
///
///	working way:	Makes random backpack for location/npcs/player
///
/////////////////////////////////////////////////////////////////////////////

TroveBox::TroveBox(int recipient, bool place)
{/////////To add more more code

		this->recipient = recipient;
		MXRN mxrn;
		troveLimit = 20;
		amountOfTroves = 0;

		if (recipient == Locations::City)
		{

			troveLimit = amountOfTroves = 10;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		else if (recipient == Locations::Suburbs)
		{
			troveLimit = amountOfTroves = 4;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == Locations::Riverside)
		{
			troveLimit = amountOfTroves = 8;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == Locations::Forest)
		{
			troveLimit = amountOfTroves = 4;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == NPCTypes::EAnimal)
		{
			troveLimit = amountOfTroves = 2;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == NPCTypes::EBystander)
		{
			troveLimit = amountOfTroves = 2;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == NPCTypes::ECity_official)
		{
			troveLimit = amountOfTroves = 4;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}

		else if (recipient == NPCTypes::ECriminal)
		{
			troveLimit = amountOfTroves = 1;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == NPCTypes::EDealer)
		{
			troveLimit = amountOfTroves = 15;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == NPCTypes::EJournalist)
		{
			troveLimit = amountOfTroves = 5;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == NPCTypes::ESmith)
		{
			troveLimit = amountOfTroves = 8;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		
		else if (recipient == NPCTypes::EWorker)
		{
			troveLimit = amountOfTroves = 6;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}

		else if (recipient == Locations::DerelictHouse)
		{
			troveLimit = amountOfTroves = 2;
			int i{};

			do
			{
				Trove add(Items::Sword, 2);
				TrovesIn.push_back(add);
				i++;
			} while (i < troveLimit);
		}
		}

		TroveBox::~TroveBox()
		{
		}
		void TroveBox::info()
		{
			std::cout << TEXTS[Game::getInstance().getLanguage()][Shop] << std::endl;

			for (int i = 0; i != TrovesIn.size(); i++) {
				std::cout << i << " - ";
				TrovesIn[i].info();
			}

		}
		int TroveBox::getSize()
		{
			return TrovesIn.size();
		}
		Trove TroveBox::GetAndDeleteTrove()
		{//zrobic zeby mozna bylo dawac konkretna wartosc a nie wszystko
			info();
			int option{};
			std::cin >> option;
			Trove toGive = TrovesIn[option];
			TrovesIn.erase(TrovesIn.begin() + option);
			amountOfTroves--;
			return toGive;
		}

		void TroveBox::getTroveInfo(int option)
		{
			return TrovesIn[option].info();
		}

		std::vector<std::string> TroveBox::getTroveString(int option)
		{
			std::vector<std::string> infos;

			for (Trove& i : TrovesIn)
			{
				infos.push_back(i.getInfoString());
			}

			return infos;
		}

		Trove TroveBox::getTrove(int option)
		{
			Trove toGive = TrovesIn[option];
			TrovesIn.erase(TrovesIn.begin() + option);
			amountOfTroves--;
			return toGive;
		}

		bool TroveBox::addTrove(Trove & toAdd)
		{
			TrovesIn.push_back(toAdd);
			if (troveLimit <= amountOfTroves) {
				TrovesIn.push_back(toAdd);
				amountOfTroves++;
				return EXIT_SUCCESS;
			}
			return EXIT_FAILURE;
		}
