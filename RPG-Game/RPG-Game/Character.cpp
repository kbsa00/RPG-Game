#include "stdafx.h"
#include "Character.h"
#include <iostream>
#include "PlayerCharacterView.h"


Character::Character(int attacks, int healthPoints, string name, RPG_role type, int playerID) :
	m_attacks(attacks), m_healthPoints(healthPoints), m_name(name), m_type(type), m_playerID(playerID)
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
void Character::action(Character & target, Character & attacker)
{
	PlayerCharacterView pcw;
	int health = 0;
	int attacks = 0;

	switch (attacker.getType())
	{
	case Wizard:
		if (target.getDecision() == 2)
		{
			cout << target.getName() << " Dodged the attack from " << attacker.getName() << endl;
		}
		else
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

		if (target.getDecision() == 2)
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

int Character::getHealthPoint() const
{
	return m_healthPoints;
}

