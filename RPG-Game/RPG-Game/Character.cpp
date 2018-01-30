#include "stdafx.h"
#include "Character.h"


Character::Character(int attacks, int healthPoints, string name, RPG_role type) :
m_attacks(attacks), m_healthPoints(healthPoints), m_name(name), m_type(type)
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

void Character::setAttack(int attack)
{
	m_attacks = attack;
}

void Character::setHealthPoint(int hp)
{
	m_healthPoints = hp; 
}


int Character::getHealthPoint() const
{
	return m_healthPoints;
}
