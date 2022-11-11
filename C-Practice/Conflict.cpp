#include "Conflict.h"

void Conflict::BeginFight(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	bool isGameOver = false;
	dinosaurPlayer.SetBlockDamage(0);
	dinosaurAi.SetBlockDamage(0);


	while (isGameOver != true) 
	{
		printCombat(dinosaurPlayer, dinosaurAi);

		// ===== Check if Game Over =====			
		isGameOver = CheckGameOver(dinosaurPlayer, dinosaurAi);
		if (isGameOver == true) { return; }

		if (dinosaurPlayer.GetDexterity() >= dinosaurAi.GetDexterity())
		{
			// ======== Player's Turn =========
			DoTurn(true, dinosaurPlayer, dinosaurAi);

			// ========= Ai's Turn ==========
			DoTurn(false, dinosaurPlayer, dinosaurAi);

			NextTurn(dinosaurPlayer, dinosaurAi);
		}
		else {

			// ========= Ai's Turn ==========
			DoTurn(false, dinosaurPlayer, dinosaurAi);

			// ======== Player's Turn =========
			DoTurn(true, dinosaurPlayer, dinosaurAi);

			NextTurn(dinosaurPlayer, dinosaurAi);

			//return; //For Debugging
		}
	}
}

int Conflict::GetActionValue(int dinosaurAction, Dinosaur& dinosaur)
{
	switch (dinosaurAction) {
	case 0:
		return dinosaur.DamageBlock();
	case 1:
		return dinosaur.AttackStomp();
	case 2:
		return dinosaur.AttackTail();
	}
}

void Conflict::DealDamage(int damageValue, Dinosaur& damagedDinosaur)
{
	damagedDinosaur.SetHpCurrent(damagedDinosaur.GetHpCurrent() + CompareDamageShield(damagedDinosaur.GetBlockDamage(), damageValue));
}

int Conflict::CompareDamageShield(int blockValue, int damageValue)
{
	if (blockValue < damageValue) {
		return blockValue - damageValue;
	} else{
		return 0;
	}
}

void Conflict::SetBlockDamage(int blockValue, Dinosaur& blockingDinosaur)
{
	blockingDinosaur.SetBlockDamage(blockValue);
}

int Conflict::turnNum = 0;

void Conflict::NextTurn(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	int currentTurn = GetTurnNum();
	SetTurnNum(++currentTurn);
}

void Conflict::SetTurnNum(int nextTurnNum)
{
	turnNum = nextTurnNum;
}

int Conflict::GetTurnNum()
{
	return turnNum;
}

void Conflict::DoTurn(bool isPlayer, Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	Dinosaur dinosaurCurrent;
	Dinosaur dinosaurOpponent;

	if (isPlayer == true) {
		dinosaurCurrent = dinosaurPlayer;
		dinosaurOpponent = dinosaurAi;
	}
	else {
		dinosaurCurrent = dinosaurAi;
		dinosaurOpponent = dinosaurPlayer;
	}

	dinosaurCurrent.SetBlockDamage(0);
	//std::cout << "Current Dino Name:" << dinosaurCurrent.GetName() << std::endl; //For Debugging
	//std::cout << "Opponent Dino Name:" << dinosaurOpponent.GetName() << std::endl; //For Debugging

	int actionIndex = dinosaurCurrent.GetActions(isPlayer, dinosaurCurrent.creatureActions);

	int actionNum = GetActionValue(actionIndex, dinosaurCurrent);
	if (actionIndex != 0) {
		//std::cout << "\n" << actionNum << " :Player: Attack action returned" << std::endl; //For Debugging
		DealDamage(actionNum, dinosaurOpponent);
	}
	else {
		SetBlockDamage(actionNum, dinosaurCurrent);
		//std::cout << "\n" << actionNum << " :Player: Block action returned" << std::endl; //For Debugging
	}

	if (isPlayer == true) {
		dinosaurPlayer = dinosaurCurrent;
		dinosaurAi = dinosaurOpponent;
	}
	else {
		dinosaurAi = dinosaurCurrent;
		dinosaurPlayer = dinosaurOpponent;
	}
}

bool Conflict::CheckGameOver(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	if (dinosaurPlayer.GetIsDead(dinosaurPlayer.GetHpCurrent()) || dinosaurAi.GetIsDead(dinosaurAi.GetHpCurrent())) {

		std::cout << "============= GAME OVER! ==============" << std::endl;
		return true;
	}
}





void Conflict::printCombat(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	std::cout << "============" << std::endl;
	std::cout << "===Turn=" << GetTurnNum() << "===" << std::endl;
	std::cout << "====Player====" << std::endl;
	dinosaurPlayer.ToString();
	std::cout << "====Ai====" << std::endl;
	dinosaurAi.ToString();
}
