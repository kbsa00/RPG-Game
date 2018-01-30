#include "stdafx.h"
#include "PlayerCharacter.h"
#include "PlayerCharacterView.h"
#include <iostream>

PlayerCharacter::PlayerCharacter(int healthpoints, int attack, string name, RPG_role type, int playerID) :
	Character(healthpoints, attack, name, type), m_playerID(playerID){

}

PlayerCharacter::~PlayerCharacter()
{
	cout << "\nPlayer name "<< getName() << " IS NOW DEAD"<< endl;
}



void PlayerCharacter::action(PlayerCharacter & target, PlayerCharacter & attacker){
	PlayerCharacterView pcw;
	int health = 0;
	int attacks = 0; 

	switch (attacker.getType())
	{
	case Wizard:
		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}else
		{
			health = target.getHealthPoint(); 
			health -= 124;
			target.setHealthPoint(health);
			attacks = attacker.getAttack();
			attacks -= 85;
			attacker.setAttack(attacks);
			pcw.promptaction(attacker, target);
		}
		break;
	
	case Assasin:
		
		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			health = target.getHealthPoint();
			health -= 170;
			target.setHealthPoint(health);
			attacks = attacker.getAttack();
			attacks -= 90;
			attacker.setAttack(attacks);
			pcw.promptaction(attacker, target);
		}
		break;

	case Troll:
		
		if(target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			health = target.getHealthPoint();
			health -= 200;
			target.setHealthPoint(health);
			attacks = attacker.getAttack();
			attacks -= 125;
			attacker.setAttack(attacks);
			pcw.promptaction(attacker, target);
		
		}

		break;

	case Elf:
		
		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			health = target.getHealthPoint();
			health -= 160;
			target.setHealthPoint(health);
			attacks = attacker.getAttack();
			attacks -= 100;
			attacker.setAttack(attacks);
			pcw.promptaction(attacker, target);
		}

		break;

	case Hobbit:
		if (target.getDecision())
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
		{
			health = target.getHealthPoint();
			health -= 130;
			target.setHealthPoint(health);
			attacks = attacker.getAttack();
			attacks -= 90;
			attacker.setAttack(attacks);
			pcw.promptaction(attacker, target);
		}

		break;
	}
}

void PlayerCharacter::setDecision(int decision)
{
	m_decision = decision;
}

int PlayerCharacter::getDecision()
{
	return m_decision; 
}

int PlayerCharacter::getPickedAttacker()
{
	return m_pickAttacker; 
}

void PlayerCharacter::setPickedAttacker(int pickAttacker)
{
	m_pickAttacker = pickAttacker; 
}

int PlayerCharacter::getPlayerID()
{
	return m_playerID; 
}