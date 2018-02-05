#pragma once
#include <string>
#include "Character.h"

using namespace std; 


class PlayerCharacter : public Character

{
public:
	PlayerCharacter(int healthpoints, int attack, string name, RPG_role type, int playerID);
	~PlayerCharacter();
	void action(PlayerCharacter & target, PlayerCharacter & attacker);

	bool getRace() const;

private:
	
	int m_playerID;
	bool m_race; 
	
};
