#pragma once
#include "Character.h"

class NPCCharacter : public Character
{
public:
	NPCCharacter(int attacks, int healthpoints, string name, RPG_role type, int playerID, bool isHuman);
	~NPCCharacter();
private:
	
};

