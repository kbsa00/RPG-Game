#include "stdafx.h"
#include "GameManager.h"
#include <memory>
#include "Factory.h"
#include "PlayerCharacterView.h"


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


	while (num < 2)
	{
		cout << "Please enter atleast two players or more.." << endl;
		cout << "Enter number of players: ";
		cin >> num;
		cout << endl;
		cout << "Initializing " << num << " players" << endl;
		cout << "<------------------------->" << endl;
	}

	
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

	cout << "GAME HAS NOW STARTED!!!!" << endl;
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
	PlayerCharacterView pcw; 

	int roundcounter = 1;
	int attackChoice; 

	for (auto players : listOfPlayers)
	{
		cout << players->getName() << " is now ready for the war!" << endl; 
	}

	bool condition; 
	
	while (condition)
	{
		
		int decision = 0; 
		cout << "\nRound " << roundcounter << " - " << "player stats" << endl; 

		for (auto player : listOfPlayers)
		{
			pcw.printStatus(*player);

		}
		
	
		for (auto player : listOfPlayers)
		{
			cout << player->getName() << " Pick your Action" << endl; 
			cout << "Actions:\n1 - Attack\n2 - Dodge" << endl; 
			cin >> decision; 
			player->setDecision(decision); 	
		}

		for (auto player : listOfPlayers)
		{
			cout << player->getName() << " - Pick your target" << endl; 
			pickEnemy(*player);
			cout << "Write your targets number: "; 
			cin >> attackChoice; 
			player->setPickedAttacker(attackChoice); 
		}
		
		for (auto player : listOfPlayers)
		{
			perfomeAction(*player);
		}
		
		for (auto player : listOfPlayers)
		{
			pcw.printStatus(*player);

		}

		checkPlayersHealth();

		roundcounter++; 
		break;
	}	
}

GameManager* GameManager::getInstance()
{
	if (_instance == 0)
	{
		_instance = new GameManager(); 
	}
	
	return _instance; 
}

void GameManager::pickEnemy(PlayerCharacter & player)
{
	int index = 0; 
	for (auto players : listOfPlayers)
	{
		if (player.getName() != players->getName())
		{
			cout << index << " - " << players->getName() << endl; 
		}
		index++;
	}
}

void GameManager::perfomeAction(PlayerCharacter& player)
{
	switch (player.getDecision())
	{
	case 1: player.attack(*listOfPlayers[player.getPickedAttacker()], player); 
		break;

	case 2: player.dodge(); 
		break;
	}

}


void GameManager::checkPlayersHealth(){
	
	for (int i = 0; i < listOfPlayers.size(); i++)
	{
		if (listOfPlayers.at(i)->m_hitpoints < 5)
		{
			listOfPlayers.erase(listOfPlayers.begin()+i); 
			
		}
	}
}


bool GameManager::checkforWinner()
{
	
	


}

	


