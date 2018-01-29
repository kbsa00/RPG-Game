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

		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			cout << attacker.getName() << " attacked " << target.getName() << " for 124 Damage" << endl;
		}

		break;

	case Assasin:

		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			cout << attacker.getName() << " attacked " << target.getName() << " for 170 Damage" << endl;
		}
		break;

	case Troll:
		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			cout << attacker.getName() << " attacked " << target.getName() << " for 200 Damage" << endl;
		}
		break;

	case Hobbit:
		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			cout << attacker.getName() << " attacked " << target.getName() << " for 130 Damage" << endl;
		}


	case Elf:
		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			cout << attacker.getName() << " attacked " << target.getName() << " for 170 Damage" << endl;
		}
		break;
	}
}


void PlayerCharacterView::printStatus(PlayerCharacter & player)
{
	cout << player.getName() << " has now Attacks/Health " << player.getAttacks() << "/" << player.gethp() << endl; 
	

}
