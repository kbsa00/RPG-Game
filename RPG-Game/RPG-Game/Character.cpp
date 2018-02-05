#include "stdafx.h"
#include "Character.h"
#include <iostream>
#include "PlayerCharacterView.h"


Character::Character(int attacks, int healthPoints, string name, RPG_role type, int playerID, bool isHuman) :
	m_attacks(attacks), m_healthPoints(healthPoints), m_name(name), m_type(type), m_playerID(playerID), m_isHuman(isHuman)
{

}


Character::~Character()
{
}

int Character::getAttack() const
{
	return m_attacks;
}

string Character::getName() const
{
	return m_name;
}

RPG_role Character::getType() const
{
	return m_type; 
}

int Character::getDecision()
{
	return m_decision;
}

int Character::getPickedAttacker()
{
	return m_pickAttacker;
}

int Character::getPlayerID()
{
	return m_playerID;
}

bool Character::getIsHuman()
{
	return m_isHuman;
}

void Character::setAttack(int attack)
{
	m_attacks = attack;
}

void Character::setHealthPoint(int hp)
{
	m_healthPoints = hp; 
}

void Character::setDecision(int decision)
{
	m_decision = decision;
}

void Character::setPickedAttacker(int pickedAttacker)
{
	m_pickAttacker = pickedAttacker;
}


int Character::getHealthPoint() const
{
	return m_healthPoints;
}

