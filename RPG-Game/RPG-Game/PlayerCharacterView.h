#pragma once
#include "PlayerCharacter.h"

class PlayerCharacterView
{
public:
	~PlayerCharacterView(); 
	void promptaction(PlayerCharacter & player, int & enemy);
	void printStatus(PlayerCharacter & player, int & enemy_hp); 

};
