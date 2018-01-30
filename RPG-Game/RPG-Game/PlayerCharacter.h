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

class PlayerCharacter

{
public:
	PlayerCharacter(int hitpoints, int attacks, string name, RPG_role type, int playerID); 
	~PlayerCharacter(); 
	void dodge(PlayerCharacter & target, PlayerCharacter & attacker); 
	void action(PlayerCharacter & target, PlayerCharacter & attacker);
	

	//Getters and setters
	int getAttacks();
    int gethp(); 
	RPG_role getType(); 
	string getName(); 
	int m_healthpoints;
	void setDecision(int decision); 
	int getDecision();
	int getPickedAttacker();
	void setPickedAttacker(int pickAttacker); 
	void setAttack(int attacks);
	int getPlayerID(); 

private:
	string m_name; 
	int m_attacks; 
	int m_decision;
	int m_pickAttacker;
	int m_playerID;
	RPG_role m_type; 
};
