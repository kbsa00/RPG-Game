#include "stdafx.h"
#include "Factory.h"
#include <memory>

 shared_ptr<PlayerCharacter>  Factory::createObject(RPG_role role, string name)
{
	switch (role)
	{
	case Wizard: {  shared_ptr<PlayerCharacter> Wizard(new PlayerCharacter(100, 50, name));
		return Wizard; 
	}
		
    
	case Assasin: { shared_ptr<PlayerCharacter> Assasin(new PlayerCharacter(100, 75, name));
		return  Assasin;
	}

	}
	
}
