#include "stdafx.h"
#include "Factory.h"
#include <memory>

 shared_ptr<PlayerCharacter>  Factory::createObject(RPG_role role, string name)
{
	switch (role)
	{
	case Wizard: {  shared_ptr<PlayerCharacter> wizard(new PlayerCharacter(100, 50, name, Wizard));
		return wizard; 
	}
		
    
	case Assasin: { shared_ptr<PlayerCharacter> assasin(new PlayerCharacter(100, 75, name, Assasin));
		return  assasin;
	}

	}
	
}
