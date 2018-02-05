#pragma once
#include <string>
#include "Character.h"

using namespace std; 


class PlayerCharacter : public Character

{
public:
	PlayerCharacter(int healthpoints, int attack, string name, RPG_role type, int playerID, bool isHuman);
	~PlayerCharacter();
	
	
};
