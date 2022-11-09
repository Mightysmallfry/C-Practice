#include "Conflict.h"

void Conflict::BeginFight(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	printCombat(dinosaurPlayer, dinosaurAi);

	dinosaurPlayer.SetBlockDamage(0);
	dinosaurAi.SetBlockDamage(0);

	while (true) 
	{
		NextTurn(dinosaurPlayer, dinosaurAi);

		if (dinosaurPlayer.GetDexterity() >= dinosaurAi.GetDexterity())
		{
			// ======== Player's Turn =========
			int actionIndex = dinosaurPlayer.GetActions(true, dinosaurPlayer.creatureActions);

			int actionNum = GetActionValue(actionIndex, dinosaurPlayer);
			if (actionIndex != 0) {
				std::cout << "\n" << actionNum << " Attack action returned" << std::endl; //For Debugging
				DealDamage(actionNum, dinosaurAi);
			}
			else {
				SetBlockDamage(actionNum, dinosaurPlayer);
				std::cout << "\n" << actionNum << " Block action returned" << std::endl; //For Debugging
			}

			// ========= Ai's Turn ==========

			actionIndex = dinosaurAi.GetActions(false, dinosaurAi.creatureActions);

			if (actionIndex != 0) {
				DealDamage(GetActionValue(actionIndex, dinosaurAi), dinosaurPlayer);
			}
			else {
				SetBlockDamage(GetActionValue(actionIndex, dinosaurAi), dinosaurAi);
			}

			// ===== Check if Game Over =====
			printCombat(dinosaurPlayer, dinosaurAi);

			if (dinosaurPlayer.GetIsDead(dinosaurPlayer.GetHpCurrent()) || dinosaurAi.GetIsDead(dinosaurAi.GetHpCurrent())) {

				std::cout << "============= GAME OVER! ==============" << std::endl;
				return;
			}
		}
		else {
			// ===== Check if Game Over =====
			printCombat(dinosaurPlayer, dinosaurAi);

			if (dinosaurPlayer.GetIsDead(dinosaurPlayer.GetHpCurrent()) || dinosaurAi.GetIsDead(dinosaurAi.GetHpCurrent())) {
				
				std::cout << "============= GAME OVER! ==============" << std::endl;
				return;
			}

			return; //For Debugging
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
	damagedDinosaur.SetHpCurrent(damagedDinosaur.GetHpCurrent() + damagedDinosaur.GetBlockDamage() - damageValue);
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





void Conflict::printCombat(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	std::cout << "====Player====" << std::endl;
	dinosaurPlayer.ToString();
	std::cout << "====Ai====" << std::endl;
	dinosaurAi.ToString();
	std::cout << "============" << std::endl;
	std::cout << "====Turn====" << std::endl;
	std::cout << "==" << GetTurnNum() << std::endl;
}
