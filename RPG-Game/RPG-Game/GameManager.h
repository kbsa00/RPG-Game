#pragma once
#include "PlayerCharacter.h"
#include <string>
#include <iostream>
#include <vector>
#include <memory>

using namespace std; 

class GameManager
{
public:
	static GameManager * _instance;
	GameManager();
	void startGame();
	RPG_role pickRPG(int id);
	void run();
	GameManager * getInstance();
	void pickEnemy(PlayerCharacter & player);
	void perfomeAction(PlayerCharacter& player); 
private:
	vector<shared_ptr<PlayerCharacter>> listOfPlayers; 

	
};
