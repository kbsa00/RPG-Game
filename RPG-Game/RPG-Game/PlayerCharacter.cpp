#include "stdafx.h"
#include "PlayerCharacter.h"
#include "PlayerCharacterView.h"
#include <iostream>

PlayerCharacter::PlayerCharacter(int healthpoints, int attack, string name, RPG_role type, int playerID) : m_healthpoints(healthpoints), 
m_attacks(attack), m_name(name), m_type(type), m_playerID(playerID)
{

}

PlayerCharacter::~PlayerCharacter()
{
	cout << "\nPlayer name "<< m_name << " IS NOW DEAD"<< endl;
}



void PlayerCharacter::action(PlayerCharacter & target, PlayerCharacter & attacker){
	PlayerCharacterView pcw;
	
	switch (attacker.getType())
	{
	case Wizard:
		if (target.getDecision() == 2)
		{
			pcw.promptaction(attacker, target); 
		}else
		{
			target.m_healthpoints -= 124;
			attacker.m_attacks -= 85;
			pcw.promptaction(attacker, target);
		}
		break;
	
	case Assasin:
		
		if (target.getDecision() == 2)
		{
			pcw.promptaction(attacker, target);
		}
		else
		{
			target.m_healthpoints -= 170;
			attacker.m_attacks -= 90;
			pcw.promptaction(attacker, target);
		}
		break;

	case Troll:
		
		if(target.getDecision() == 2)
		{
			pcw.promptaction(attacker, target);
		}
		else
		{
			target.m_healthpoints -= 200;
			attacker.m_attacks -= 125;
			pcw.promptaction(attacker, target);
		}

		break;

	case Elf:
		
		if (target.getDecision() == 2)
		{
			pcw.promptaction(attacker, target);
		}
		else
		{
			target.m_healthpoints -= 160;
			attacker.m_attacks -= 100;
			pcw.promptaction(attacker, target);
		}

		break;

	case Hobbit:
		if (target.getDecision())
		{
			pcw.promptaction(attacker, target);
		}
		else
		{
			target.m_healthpoints -= 130;
			attacker.m_attacks -= 90;
			pcw.promptaction(attacker, target);
		}

		break;
	}
}


int PlayerCharacter::getAttacks()
{
	return m_attacks;
}

 int PlayerCharacter::gethp()
{
	return m_healthpoints; 
}

RPG_role PlayerCharacter::getType()
{
	return m_type; 
}

string PlayerCharacter::getName()
{
	return m_name; 
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

void PlayerCharacter::setAttack(int attacks)
{
	m_attacks = attacks;
}

int PlayerCharacter::getPlayerID()
{
	return m_playerID; 
}

