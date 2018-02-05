#pragma once
class Character;

class GameLogic
{
public:
	GameLogic();
	~GameLogic();

   void action(Character & target, Character & attacker);

	
};

