#pragma once
#include <string>
#include "Character.h"

using namespace std; 


class PlayerCharacter : public Character

{
public:
	PlayerCharacter(int attacks, int healthpoints, string name, RPG_role type, int playerID); 
	~PlayerCharacter(); 
	void action(PlayerCharacter & target, PlayerCharacter & attacker);
	

	//Getters and setters
	int getDecision();
	int getPlayerID();
	int getPickedAttacker(); 

	//Setters
	void setDecision(int decision);
	void setPickedAttacker(int pickAttacker);

private:
	
	int m_decision;
	int m_pickAttacker;
	int m_playerID;
	
};
