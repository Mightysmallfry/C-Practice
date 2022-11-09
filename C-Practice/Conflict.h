#pragma once



#include "Dinosaur.h"


class Conflict
{
public:
	Conflict() {}

	static void BeginFight(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);

	static int GetActionValue(int dinosaurAction, Dinosaur& dinosaur);
	
	static void DealDamage(int damageValue, Dinosaur& damagedDinosaur);
	static void SetBlockDamage(int blockValue, Dinosaur& blockingDinosaur);

	static void NextTurn(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);

	static void SetTurnNum(int nextTurnNum);
	static int GetTurnNum();





	static void printCombat(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);



	// ===================== Optimized Functions ===============



private:
	static int turnNum;

};

