#include "stdafx.h"
#include "PlayerCharacterView.h"
#include <iostream>
using namespace std;
PlayerCharacterView::~PlayerCharacterView()
{
}

void PlayerCharacterView::promptaction(PlayerCharacter & player, int & enemy)
{
	switch (player.getType())
	{
	case Wizard: 
		cout << player.getName() << " attacked for 25 Damage" << endl; 
		printStatus(player, enemy);
		break;

	case Assasin: 
		cout << player.getName() << " attacked for 50 Damage" << endl;
		printStatus(player, enemy);
	}
}

void PlayerCharacterView::printStatus(PlayerCharacter & player, int & enemy_hp)
{
	cout << player.getName() << " has now " << player.getAttacks() << "/" << player.gethp() << endl; 
	cout << "ENEMYS HP: " << enemy_hp << endl;

}
