#include "stdafx.h"
#include "GameManager.h"
#include <memory>
#include "Factory.h"


GameManager * GameManager::_instance = 0; 


GameManager::GameManager()
{
	
}

void GameManager::startGame()
{
	Factory factory;
	int num = 0;
	string name;
	int idRPG;
	vector<string> nameList; 


	cout << "Enter number of players: ";
	cin >> num;
	cout << endl; 
	cout << "Initializing " << num << " players" << endl; 
	
	cout << "<------------------------->" << endl; 

	
	for (int i = 0; i < num; i++){
		cout << "Player Classes:\n1 - Wizard\n2 - Assasin" << endl; 
		cout << "Pick your player";
		cin >> idRPG; 
		RPG_role type = pickRPG(idRPG); 
		cout << "Name of the player: " << i + 1 << " "; 
		cin >> name; 
		
		listOfPlayers.push_back(factory.createObject(type, name));
		cout << endl; 
	}
	run(); 
}


RPG_role GameManager::pickRPG(int id)
{
	switch (id)
	{
	case 1: return Wizard; 
	
	case 2: return Assasin; 

	}
	
}

void GameManager::run()
{
	cout << "GAME HAS NOW STARTED!!!!" << endl; 
	
	/**
	 * TODO TRY TO CHECK IF HP IS DOWN, FIND A WAY TO USE ATTACK METHOD IN A GOOD WAY, ALSO START ON DODGE
	 * TODO ALSO go through VIEW CLASS
	 * 
	 */
	listOfPlayers.at(0)->attack(listOfPlayers.at(1)->m_hitpoints, *listOfPlayers.at(1)); 

}

GameManager* GameManager::getInstance()
{
	if (_instance == 0)
	{
		_instance = new GameManager(); 
	}

	return _instance; 
}




