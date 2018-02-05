#include "stdafx.h"
#include "Factory.h"
#include <memory>
#include "NPCCharacter.h"

shared_ptr<Character>  Factory::createObject(RPG_role role, string name, int playerID, bool isHuman)
{
	switch (role)
	{
	case Wizard: {
		if (isHuman)
		{
			shared_ptr<PlayerCharacter> wizard(new PlayerCharacter(590, 450, name, Wizard, playerID, isHuman));
			return wizard;
		}
		return shared_ptr<NPCCharacter>(new NPCCharacter(590, 450, name, Wizard, playerID, isHuman));
	}

	case Assasin: { 
		
		if (isHuman)
		{
		  return shared_ptr<PlayerCharacter>(new PlayerCharacter(483, 750, name, Assasin, playerID, isHuman)); 
		}
		return shared_ptr<NPCCharacter>(new NPCCharacter(483, 750, name, Assasin, playerID, isHuman));
	}


	case Hobbit: {
		if (isHuman)
		{
		 return shared_ptr<PlayerCharacter>(new PlayerCharacter(424, 500, name, Hobbit, playerID, isHuman));
		}	
		return shared_ptr<NPCCharacter>(new NPCCharacter(424, 500, name, Hobbit, playerID, isHuman));
	}

	case Elf: {
		if (isHuman)
		{
			return shared_ptr<PlayerCharacter>(new PlayerCharacter(520, 449, name, Elf, playerID, isHuman));
		}
			
		return shared_ptr<NPCCharacter>(new NPCCharacter(520, 449, name, Elf, playerID, isHuman));
	}

	case Troll: {
		if (isHuman)
		{
			return shared_ptr<PlayerCharacter>(new PlayerCharacter(900, 500, name, Troll, playerID, isHuman	));
		}
		return shared_ptr<NPCCharacter>(new NPCCharacter(900, 500, name, Troll, playerID, isHuman));
	 }

	}
}
