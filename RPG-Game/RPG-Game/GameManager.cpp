#include "stdafx.h"
#include "GameManager.h"
#include <memory>
#include "Factory.h"
#include "PlayerCharacterView.h"
#include <ctime>


GameManager * GameManager::_instance = 0; 


GameManager::GameManager()
{
	
}

void GameManager::startGame()
{
	Factory factory;
	int num = 0;
	int npcNum = 0;
	string name;
	int idRPG;
	char answer;
	string npcName = "NPC";
	

	while (num < 2)
	{
		cout << "Please enter atleast two players or more.." << endl;
		cout << "Enter number of players(Humans): ";
		cin >> num;
		cout << endl;
		cout << "Initializing " << num << " players" << endl;
		cout << "<------------------------->" << endl;
	}
	
	cout << "Do you want to initlize NPC players?\ny for yes and n for no " << endl; 
	cin >> answer;

	if (answer == 'y')
	{
		cout << "Please enter how many NPC players you want to add " << endl;
		cin >> npcNum;
		cout << "Initializing " << npcNum << " players" << endl;
		cout << "<------------------------->" << endl;
		
		initilizeRandom(); 
		for (int i = 0; i < npcNum; i++){
			
			int npcPick = rand() % 5 + 1; 
			RPG_role type = pickRPG(npcPick); 
			npcName += to_string(i);
			cout << "Name of the NPC player " << npcName << " is created" << endl;
			listOfPlayers.push_back(factory.createObject(type, npcName, i+10, false));
			 
		}
		
	}
	else
	{
		cout << "You have decided not to play with NPC players" << endl; 
	}


	for (int i = 0; i < num; i++){
		cout << "Player Classes:\n1 - Wizard\n2 - Assasin\n3 - Hobbit\n4 - Elf\n5 - Troll " << endl; 
		cout << "Pick your player";
		cin >> idRPG; 
		RPG_role type = pickRPG(idRPG); 
		cout << "Name of the player: " << i + 1 << " "; 
		cin >> name; 
		
		listOfPlayers.push_back(factory.createObject(type, name, i, true));
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

	case 3: return Hobbit;

	case 4: return Elf;

	case 5: return Troll;

	}
	
}

void GameManager::run()
{
	
	bool condition = true;
	int roundcounter = 1;
	int attackChoice;
	srand(time(NULL)); 

	for (auto players : listOfPlayers)
	{
		cout << players->getName() << " is now ready for the war!" << endl; 
	}
 
	
	while (true)
	{
		int decision = 0;
		 
		cout << "\n##Round " << roundcounter << " - " << "of the game" << "###" << endl; 

		playersStatus();
		powerUp();
		initilizeRandom(); 

		for (auto player : listOfPlayers)
		{
			cout << "\n"<< player->getName() << " Pick your Action" << endl; 
			cout << "Actions:\n1 - Attack\n2 - Dodge" << endl;

			if (player->getIsHuman())
			{
				cin >> decision;
				player->setDecision(decision);
			}
			else
			{
				int npcDecision = rand() % 2 + 1; 
				player->setDecision(npcDecision);
				cout << player->getName() << " picked " << npcDecision << endl; 

			}	
		}

		for (auto player : listOfPlayers)
		{
			if (player->getDecision() != 2)
			{
				
				if (player->getIsHuman() == true)
				{
					cout << player->getName() << " - Pick your target" << endl;
					pickEnemy(*player);

					cout << "Write your targets number: ";
					cin >> attackChoice;
					player->setPickedAttacker(attackChoice);
				}
				else
				{
					cout << "NPC is picking a target" << endl; 
					player->setPickedAttacker(rand() % listOfPlayers.size()-1);
				}
				
			}
			
		}
		
		performAction(); 
		checkPlayersHealth();

		if (listOfPlayers.size() == 1)
		{
			cout << "WINNER WINNER CHICKEN DINNER: " << listOfPlayers.at(0)->getName() << " PLAYER-ID: " << listOfPlayers.at(0)->getPlayerID() << endl;
			break;
		}

		roundcounter++; 
		
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

void GameManager::pickEnemy(Character & player)
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

void GameManager::performAction()
{
	for (auto player : listOfPlayers)
	{
		player->action(*listOfPlayers[player->getPickedAttacker()], *player); 
	}
}


void GameManager::checkPlayersHealth(){
	
	for (int i = 0; i < listOfPlayers.size(); i++)
	{
		if (listOfPlayers.at(i)->getHealthPoint() < 5)
		{
			listOfPlayers.erase(listOfPlayers.begin()+i); 
			
		}
	}
}

void GameManager::powerUp()
{
	for (auto player : listOfPlayers)
	{
		if (player->getAttack() <= 50)
		{
			player->setAttack(200);
		}
	}

}


void GameManager::playersStatus()
{
	PlayerCharacterView pcw; 
	cout << "###-------Player Status------###" << endl;
	for (auto player : listOfPlayers)
	{
		pcw.printStatus(*player);
	}
}

void GameManager::initilizeRandom()
{
	srand(time(NULL));
}
