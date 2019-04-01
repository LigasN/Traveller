#pragma once

#include "LocationContext.h"
#include "Episodes.h"
#include "Player.h"
#include "Arum_City.h"
#include "Settings_Handle.h"
#include <map>


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
	std::map< std::string, int> SettingsMap;

public:
	
	static Game& getInstance();
	int getLocationName();
	Player & getPlayer();
	//NPC & getNPC();

	void locationInfo();
	void changeLocation();
	void UpdateSettings();
	int getLanguage();
	void setGameOver();
	bool getGameOver();
	void setEpisod(Episodes episod);
	void setPlayerState(PlayerStates state);

	bool Update();
};

