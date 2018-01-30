#pragma once
#include "Character.h"

class NPCCharacter : public Character
{
public:
	NPCCharacter(int attacks, int healthpoints, string name, RPG_role type);
	~NPCCharacter();

	//Setters
	void setDecision(int decision); 
	void setPickedAttacker(int pickedAttacker);

	//Getters
	int getDecision(); 
	int getPickedAttacker();

private:
	int m_decision; 
	int m_pickAttacker; 
	
};

