#include "stdafx.h"
#include "PlayerCharacter.h"

PlayerCharacter::PlayerCharacter(int hitpoints, int attack, string name) : m_hitpoints(hitpoints), 
m_attacks(attack), m_name(name)
{

}

PlayerCharacter::~PlayerCharacter()
{

}

void PlayerCharacter::run_turn()
{


}

void PlayerCharacter::hit()
{


}

void PlayerCharacter::add_attack()
{


}

int PlayerCharacter::getAttacks()
{
	return m_attacks;
}

int PlayerCharacter::gethp()
{
	return m_hitpoints; 
}
