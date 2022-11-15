#include "Game.h"
#include "Triceratops.h"

void Game::Run(bool is_running)
{


	// ================================ Initialize Variables

	Triceratops Tucker;
	//std::cout << Tucker.GetAttackDamageValue(AttackActions::AttackStomp);
	Tucker.AttacksToString();

	// ================================ Update game state


	while (is_running)
	{
		is_running = Update(is_running);




		if (!is_running)
		{
			return;
		}
	}
}

bool Game::Update(bool is_running)
{

	is_running = false;

	return is_running;
}
