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


	case Hobbit: { shared_ptr<PlayerCharacter> hobbit(new PlayerCharacter(200, 75, name, Hobbit));
		return hobbit;
	}

	case Elf: { shared_ptr<PlayerCharacter> elf(new PlayerCharacter(300, 100, name, Elf));
		return elf;
	}

	case Troll: { shared_ptr<PlayerCharacter> troll(new PlayerCharacter(400, 250, name, Troll));
		return troll;
	 }
  }
}
