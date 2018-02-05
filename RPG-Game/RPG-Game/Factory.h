#pragma once
#include "PlayerCharacter.h"
#include <memory>


class Factory
{
public:
	 shared_ptr<Character> createObject(RPG_role role, string name, int playerID); 
};
