#include "stdafx.h"
#include "NPCCharacter.h"
#include <iostream>


NPCCharacter::NPCCharacter(int attacks, int healthpoints, string name, RPG_role type, int playerID) :
	Character(attacks, healthpoints, name, type, playerID)
{
	m_race = false;
}


NPCCharacter::~NPCCharacter()
{
	cout << "Player name: " << getName() << " Player ID: " << getPlayerID() << " IS NOW DEAD " << endl; 

}


bool NPCCharacter::getRace()
{
	return m_race;
}


