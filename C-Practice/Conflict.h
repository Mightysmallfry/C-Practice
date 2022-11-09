#pragma once



#include "Dinosaur.h"


class Conflict
{
public:
	Conflict() {}

	static void BeginFight(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);

	static int GetActionValue(int dinosaurAction, Dinosaur& dinosaur);
	
	static void DealDamage(int damageValue, Dinosaur& damagedDinosaur);
	static int CompareDamageShield(int blockValue, int damageValue);
	static void SetBlockDamage(int blockValue, Dinosaur& blockingDinosaur);

	static void NextTurn(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);
	static void SetTurnNum(int nextTurnNum);
	static int GetTurnNum();

	static void DoTurn(bool isPlayer, Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);
	static bool CheckGameOver(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);


	static void printCombat(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi);




	// ===================== Optimized Functions ===============



private:
	static int turnNum;

};

