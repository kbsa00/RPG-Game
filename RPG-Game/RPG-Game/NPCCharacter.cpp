#include "stdafx.h"
#include "NPCCharacter.h"
#include <iostream>


NPCCharacter::NPCCharacter(int attacks, int healthpoints, string name, RPG_role type, int playerID, bool isHuman) :
	Character(attacks, healthpoints, name, type, playerID, isHuman)
{
}


NPCCharacter::~NPCCharacter()
{
	cout << "Player name: " << getName() << " Player ID: " << getPlayerID() << " IS NOW DEAD " << endl; 

}


