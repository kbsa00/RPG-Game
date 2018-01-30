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
	Character(int attacks, int healthPoints, string name, RPG_role type);
	~Character();

	//Getters
	int getAttack() const;
	string getName() const;
	int getHealthPoint() const;
	RPG_role getType() const;

	//Setters
	void setAttack(int attack);
	void setHealthPoint(int hp);

private:
	int m_attacks;
	RPG_role m_type;
	int m_healthPoints;
	string m_name;

};