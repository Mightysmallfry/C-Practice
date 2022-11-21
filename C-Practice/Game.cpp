#include "Game.h"
#include "Triceratops.h"


int Game::Run()
{
    while (!quit)
    {
        Input();
        Update();
        Render();
    }
    return EXIT_SUCCESS;
}

void Game::Setup()
{
    // Setup/initialize the game state/variables
    // ================================ Initialize Variables


}

void Game::Input()
{
    // Get input from the user
}

void Game::Update()
{
    // Update game state
    //std::cout << Tucker.GetAttackDamageValue(AttackActions::AttackStomp);
    Tucker.AttacksToString();
}

void Game::Render()
{
    // Update the screen
}

