#pragma once
#include "PlayerCharacter.h"

class NPCCharacterView
{
public:
	NPCCharacterView();
	~NPCCharacterView();
	void promptAction(NPCCharacterView & attacker, PlayerCharacter & target); 
	void printStatus(PlayerCharacter & player); 
};

