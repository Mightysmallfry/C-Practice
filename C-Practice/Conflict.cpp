#include "Conflict.h"

void Conflict::BeginFight(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	printCombat(dinosaurPlayer, dinosaurAi);
	while (bool running = true) 
	{


		if (dinosaurPlayer.GetDexterity() >= dinosaurAi.GetDexterity())
		{
			int player_block = dinosaurPlayer.GetConstitution();
			int ai_block = dinosaurAi.GetConstitution();

			int player_action = GetActionPlayer();
			bool isAttacking = GetIsAttacking(player_action);
			if (isAttacking == true) {
				player_block = dinosaurPlayer.GetConstitution();//Always reset the block to default if attacking
				dinosaurAi.SetHpCurrent(dinosaurAi.GetHpCurrent() + (ai_block - GetAttackPlayer(player_action, dinosaurPlayer)));
			}
			else { // must be blocking if not attacking
				player_block = dinosaurPlayer.DamageBlock();
			}

			dinosaurPlayer.SetHpCurrent(dinosaurPlayer.GetHpCurrent() + (player_block - GetAttackAi(dinosaurAi)));



			// ===== Check if Game Over =====
			printCombat(dinosaurPlayer, dinosaurAi);

			if (dinosaurPlayer.GetIsDead(dinosaurPlayer.GetHpCurrent()) || dinosaurAi.GetIsDead(dinosaurAi.GetHpCurrent())) {

				std::cout << "GAME OVER!" << std::endl;

				running = false;
			}


		}
		else {


			int player_block = dinosaurPlayer.GetConstitution();
			int ai_block = dinosaurAi.GetConstitution();

			dinosaurPlayer.SetHpCurrent(dinosaurPlayer.GetHpCurrent() + (player_block - GetAttackAi(dinosaurAi)));


			int player_action = GetActionPlayer();
			bool isAttacking = GetIsAttacking(player_action);
			if (isAttacking == true) {
				player_block = dinosaurPlayer.GetConstitution();//Always reset the block to default if attacking
				dinosaurAi.SetHpCurrent(dinosaurAi.GetHpCurrent() + (ai_block - GetAttackPlayer(player_action, dinosaurPlayer)));
			}
			else { // must be blocking if not attacking
				player_block = dinosaurPlayer.DamageBlock();
			}


			// ===== Check if Game Over =====
			printCombat(dinosaurPlayer, dinosaurAi);

			if (dinosaurPlayer.GetIsDead(dinosaurPlayer.GetHpCurrent()) || dinosaurAi.GetIsDead(dinosaurAi.GetHpCurrent())) {
				
				std::cout << "GAME OVER!" << std::endl;
				
				running = false;
			}
		}
	}
}

int Conflict::GetActionPlayer()
{
	int player_choice = 0;
	char input = 'Z';


	std::cout << "Which action will you do?" << std::endl;
	std::cout << "[S]tomp, [T]ail, [B]lock" << std::endl;
	std::cin >> input;

	switch (input)
	{
	case 'S':
		player_choice = 1;
		break;
	case 'T':
		player_choice = 2;
		break;
	case 'B':
		player_choice = 3;
		break;
	}

	return player_choice;
}

bool Conflict::GetIsAttacking(int player_action)
{
	bool isAttacking = true;
	switch (player_action)
	{
	case 3:
		isAttacking = false;
		break;
	default:
		isAttacking = true;
		break;
	}
	return isAttacking;
}

int Conflict::GetAttackPlayer(int player_action, Dinosaur& playerDinosaur)
{

	int damage = 0;

	switch (player_action) {
	case 1:
		damage = playerDinosaur.AttackStomp();
		break;
	case 2:
		damage = playerDinosaur.AttackTail();
		break;
	}

	return damage;
}

int Conflict::GetAttackAi(Dinosaur& dinosaurAi)
{
	int attack_value = dinosaurAi.AttackStomp();

	return attack_value;
}

void Conflict::printCombat(Dinosaur& dinosaurPlayer, Dinosaur& dinosaurAi)
{
	std::cout << "====Player====" << std::endl;
	dinosaurPlayer.ToString();
	std::cout << "====Ai====" << std::endl;
	dinosaurAi.ToString();
	std::cout << "============" << std::endl;
}
