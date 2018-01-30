#include "stdafx.h"
#include "PlayerCharacterView.h"
#include <iostream>
using namespace std;
PlayerCharacterView::~PlayerCharacterView()
{

}

void PlayerCharacterView::promptaction(PlayerCharacter & attacker, PlayerCharacter & target)
{
	
	switch (attacker.getType()){

		case Wizard:
		
		cout << attacker.getName() << " attacked " << target.getName() << " for 124 Damage" << endl;
		break;

	case Assasin:

		cout << attacker.getName() << " attacked " << target.getName() << " for 170 Damage" << endl;
		break;

	case Troll:
	
		cout << attacker.getName() << " attacked " << target.getName() << " for 200 Damage" << endl;
		
		break;

	case Hobbit:
		
		cout << attacker.getName() << " attacked " << target.getName() << " for 130 Damage" << endl;
		
	case Elf:
		
		cout << attacker.getName() << " attacked " << target.getName() << " for 160 Damage" << endl;
		
		break;
	}
}


void PlayerCharacterView::printStatus(PlayerCharacter & player)
{
	cout << player.getName() << " {"<< player.getPlayerID() << "} has now Attacks/Health " << player.getAttack() << "/" << player.getHealthPoint() << endl; 
	

}
