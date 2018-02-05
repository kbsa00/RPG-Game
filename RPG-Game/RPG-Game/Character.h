#pragma once
#include <string>
using namespace std;

enum RPG_role
{
	Wizard,
	Assasin,
	Hobbit,
	Elf,
	Troll
};
class Character
{
public:
	Character(int attacks, int healthPoints, string name, RPG_role type, int playerID, bool isHuman);
	~Character();

	//Getters
	int getAttack() const;
	string getName() const;
	int getHealthPoint() const;
	RPG_role getType() const;
	int getDecision();
	int getPickedAttacker();
	int getPlayerID();
	bool getIsHuman();
	

	//Setters
	void setAttack(int attack);
	void setHealthPoint(int hp);
	void setDecision(int decision);
	void setPickedAttacker(int pickedAttacker);

	//Functions
	void action(Character & target, Character & attacker);

private:
	int m_attacks;
	int m_decision;
	int m_pickAttacker;
	RPG_role m_type;
	int m_healthPoints;
	string m_name;
	int m_playerID;
	int m_isHuman;

};