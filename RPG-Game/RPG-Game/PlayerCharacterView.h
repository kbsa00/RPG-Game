#pragma once
#include "PlayerCharacter.h"

class PlayerCharacterView
{
public:
	~PlayerCharacterView(); 
	void promptaction(PlayerCharacter & player);
	void printStatus(PlayerCharacter & player); 

};
