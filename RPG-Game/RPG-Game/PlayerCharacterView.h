#pragma once
#include "PlayerCharacter.h"

class PlayerCharacterView
{
public:
	~PlayerCharacterView(); 
	void promptaction(PlayerCharacter & player, PlayerCharacter & target);
	void printStatus(PlayerCharacter & player); 

};
