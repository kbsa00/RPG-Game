#include "stdafx.h"
#include "PlayerCharacter.h"
#include "PlayerCharacterView.h"
#include <iostream>

PlayerCharacter::PlayerCharacter(int healthpoints, int attack, string name, RPG_role type, int playerID) :
	Character(healthpoints, attack, name, type, playerID){
	m_race = true;
}

PlayerCharacter::~PlayerCharacter()
{
	cout << "\nPlayer name "<< getName() << " IS NOW DEAD"<< endl;
}

bool PlayerCharacter::getRace() const
{
	return m_race;
}
