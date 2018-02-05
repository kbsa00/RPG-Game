#pragma once
#include "PlayerCharacter.h"

class PlayerCharacterView
{
public:
	~PlayerCharacterView(); 
	void promptaction(Character & player, Character & target);
	void printStatus(Character & player); 

};
