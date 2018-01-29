#include "stdafx.h"
#include "PlayerCharacter.h"
#include "PlayerCharacterView.h"
#include <iostream>

PlayerCharacter::PlayerCharacter(int hitpoints, int attack, string name, RPG_role type) : m_hitpoints(hitpoints), 
m_attacks(attack), m_name(name), m_type(type)
{

}

PlayerCharacter::~PlayerCharacter()
{
	cout << "DESTROYED OBJECT, NAME: " << m_name;
}

void PlayerCharacter::dodge(PlayerCharacter & attacker, PlayerCharacter & target)
{
	

}

void PlayerCharacter::attack(PlayerCharacter & target, PlayerCharacter & attacker){
	PlayerCharacterView pcw;
	
	switch (attacker.getType())
	{
	case Wizard:
		if (target.getDecision() == 2)
		{
			pcw.promptaction(attacker, target); 
		}else
		{
			target.m_hitpoints -= 25;
			attacker.m_attacks -= 25;
			pcw.promptaction(attacker, target);
		}
		break;
	
	case Assasin: target.m_hitpoints -= 50;
		attacker.m_attacks -= 25;
		pcw.promptaction(attacker, target);
		break;
	}
}


int PlayerCharacter::getAttacks()
{
	return m_attacks;
}

 int PlayerCharacter::gethp()
{
	return m_hitpoints; 
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

