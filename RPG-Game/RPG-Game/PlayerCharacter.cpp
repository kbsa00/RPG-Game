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
		pcw.promptaction(object, enemy_hp); 
		break;
	
	case Assasin: enemy_hp -= 50;
		object.m_attacks -= 25;
		pcw.promptaction(object, enemy_hp);
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

