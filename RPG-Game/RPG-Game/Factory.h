﻿#pragma once
#include "PlayerCharacter.h"
#include <memory>


class Factory
{
public:
	 shared_ptr<PlayerCharacter> createObject(RPG_role role, string name); 
};
