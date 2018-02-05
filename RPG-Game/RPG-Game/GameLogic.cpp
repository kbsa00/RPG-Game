#include "stdafx.h"
#include "GameLogic.h"
#include "PlayerCharacterView.h"
#include <iostream>


GameLogic::GameLogic()
{
}


GameLogic::~GameLogic()
{
}

void GameLogic::action(Character & target, Character & attacker)
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
			target.setHealthPoint(health -= 124);
			attacks = attacker.getAttack();
			attacker.setAttack(attacks -= 85);
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
			target.setHealthPoint(health -= 170);
			attacks = attacker.getAttack();
			attacker.setAttack(attacks -= 90);
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

			target.setHealthPoint(health -= 200);
			attacks = attacker.getAttack();
			attacker.setAttack(attacks -= 125);
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

			target.setHealthPoint(health -= 160);
			attacks = attacker.getAttack();
			attacker.setAttack(attacks -= 100);
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
			target.setHealthPoint(health -= 130);
			attacks = attacker.getAttack();
			attacker.setAttack(attacks -= 90);
			pcw.promptaction(attacker, target);
		}

		break;
	}
}
