#pragma once

#include "Dinosaur.h"


class Conflict
{
public:
	Conflict() {}

	static void BeginFight(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);

	static int GetActionPlayer(); //Player chooses which action and returns value
	static bool GetIsAttacking(int player_action); // checks if player is attacking or blocking
	static int GetAttackPlayer(int player_action, Dinosaur& playerDinosaur); // returns value for chosen attack


	static int GetAttackAi(Dinosaur& dinosaurAi); //AI randomly chooses the actions, but right now will only stomp

	static void printCombat(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);

private:


};

