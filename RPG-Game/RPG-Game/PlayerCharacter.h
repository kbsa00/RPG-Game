#pragma once
#include <string>

using namespace std; 

enum RPG_role
{
	Wizard,
	Troll,
	Assasin,
	Hobbit
};

class PlayerCharacter

{
public:
	PlayerCharacter(int hitpoints, int attacks, string name, RPG_role type); 
	~PlayerCharacter(); 
	void dodge(); 
	void attack(int & enemy_hp, PlayerCharacter & object);
	
	//Getters
	int getAttacks();
	int gethp(); 
	RPG_role getType(); 
	string getName(); 
	int m_hitpoints;
private:
	string m_name; 
	int m_attacks; 
	
	RPG_role m_type; 
};
