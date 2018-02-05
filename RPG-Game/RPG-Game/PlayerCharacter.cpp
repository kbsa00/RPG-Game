#include "stdafx.h"
#include "PlayerCharacter.h"
#include "PlayerCharacterView.h"
#include <iostream>

PlayerCharacter::PlayerCharacter(int healthpoints, int attack, string name, RPG_role type, int playerID, bool isHuman) :
	Character(healthpoints, attack, name, type, playerID, isHuman){
	
}

PlayerCharacter::~PlayerCharacter()
{
	cout << "\nPlayer name "<< getName() << " IS NOW DEAD"<< endl;
}

