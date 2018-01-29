// RPG-Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameManager.h"


int main()
{
	int num;
	string name; 
	vector<string> listOfNames; 
	GameManager * p3; 
	GameManager * game_manager = GameManager::_instance; 
	p3 = game_manager->getInstance(); 
	p3->startGame();

	delete p3;
	delete game_manager;
    return 0;
}

