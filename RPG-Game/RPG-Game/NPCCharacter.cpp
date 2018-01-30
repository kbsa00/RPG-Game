#include "stdafx.h"
#include "NPCCharacter.h"


NPCCharacter::NPCCharacter(int attacks, int healthpoints, string name, RPG_role type) :
	Character(attacks, healthpoints, name, type)
{
}


NPCCharacter::~NPCCharacter()
{
}

void NPCCharacter::setDecision(int decision)
{
	m_decision = decision;
}

void NPCCharacter::setPickedAttacker(int pickedAttacker)
{
	m_pickAttacker = pickedAttacker; 
}

int NPCCharacter::getDecision()
{
	return m_decision;
}

int NPCCharacter::getPickedAttacker()
{
	return m_pickAttacker;
}


