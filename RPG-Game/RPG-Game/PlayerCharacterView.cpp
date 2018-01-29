#include "stdafx.h"
#include "PlayerCharacterView.h"
#include <iostream>
using namespace std;
PlayerCharacterView::~PlayerCharacterView()
{
}

void PlayerCharacterView::promptaction(PlayerCharacter & attacker, PlayerCharacter & target)
{
	switch (attacker.getType())
	{
	case Wizard:

		if(target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << target.getName() << endl; 
		}
		else
		{
			cout << attacker.getName() << " attacked " << target.getName() << " for 25 Damage" << endl;
		}
		 
		break;

	case Assasin:

		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << target.getName() << endl; 
		}
		else
		{
			cout << attacker.getName() << " attacked " << target.getName() << " for 50 Damage" << endl;
		}
		
		break;
	}
}

void PlayerCharacterView::promptDodge(PlayerCharacter& player, PlayerCharacter& target)
{
	

}

void PlayerCharacterView::printStatus(PlayerCharacter & player)
{
	cout << player.getName() << " has now " << player.getAttacks() << "/" << player.gethp() << endl; 
	

}
