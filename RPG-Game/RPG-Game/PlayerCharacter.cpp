#include "stdafx.h"
#include "PlayerCharacter.h"
#include "PlayerCharacterView.h"

PlayerCharacter::PlayerCharacter(int hitpoints, int attack, string name, RPG_role type) : m_hitpoints(hitpoints), 
m_attacks(attack), m_name(name), m_type(type)
{

}

PlayerCharacter::~PlayerCharacter()
{

}

void PlayerCharacter::dodge()
{


}

void PlayerCharacter::attack(int &enemy_hp, PlayerCharacter & object){
	PlayerCharacterView pcw;
	
	switch (object.getType())
	{
	case Wizard: 
		
		enemy_hp -= 25;
		object.m_attacks -= 25; 
		pcw.promptaction(object); 
		break;
	
	case Assasin: enemy_hp -= 50;
		object.m_attacks -= 25;
		pcw.promptaction(object);
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

