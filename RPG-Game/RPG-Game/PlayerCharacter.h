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
	PlayerCharacter(int hitpoints, int attacks, string name); 
	~PlayerCharacter(); 
	void run_turn(); 
	void hit(); 
	void add_attack();
	
	//Getters
	int getAttacks(); 
	int gethp(); 

private:
	string m_name; 
	int m_attacks; 
	int m_hitpoints; 
};
