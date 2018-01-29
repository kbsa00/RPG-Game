#pragma once
#include <string>

using namespace std; 

enum RPG_role
{
	Wizard,
	Troll,
	Assasin,
	Hobbit, 
	Elf
};

class PlayerCharacter

{
public:
	PlayerCharacter(int hitpoints, int attacks, string name, RPG_role type); 
	~PlayerCharacter(); 
	void dodge(PlayerCharacter & target, PlayerCharacter & attacker); 
	void attack(PlayerCharacter & target, PlayerCharacter & attacker);
	

	//Getters and setters
	int getAttacks();
    int gethp(); 
	RPG_role getType(); 
	string getName(); 
	int m_hitpoints;
	void setDecision(int decision); 
	int getDecision();
	int getPickedAttacker();
	void setPickedAttacker(int pickAttacker); 

private:
	string m_name; 
	int m_attacks; 
	int m_decision;
	int m_pickAttacker;
	RPG_role m_type; 
};
