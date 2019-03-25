#pragma once

#include "LocationContext.h"
#include "Episodes.h"
#include "Player.h"
#include "Arum_City.h"

class Game
{
private:
	Game();
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	~Game();
	EpisodesMachine episodes_machine;
	LocationContext Location;
	Player player;
	Episodes episod;
	PlayerStates state;
	NPC npc;
	bool gameOver;
	static Game* instance;
	int Language;

public:
	
	static Game& getInstance();
	int getLocationName();
	Player & getPlayer();
	//NPC & getNPC();

	void locationInfo();
	void changeLocation();

	int getLanguage();
	void setGameOver();
	bool getGameOver();
	void setEpisod(Episodes episod);
	void setPlayerState(PlayerStates state);

	bool Update();
};

