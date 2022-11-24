#include "Game.h"
#include "Triceratops.h"


namespace Jurassic
{
    int Game::Run()
    {
        Setup();
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
        display.ClearScreen();

        // Setup/initialize the game state/variables
        // ================================ Initialize Variables
        //Triceratops Adventurer1("Herman", 1, 2, 3, 4, 5);
        //Triceratops Adventurer2("Elsa", 3, 4, 5, 6, 7);
        //Triceratops Adventurer3("Foo", 3, 4, 5, 6, 7);

        //Adventurers.SetName("The Good");
        //Adventurers.AddMember(Adventurer1);
        //Adventurers.AddMember(Adventurer2);
        //Adventurers.AddMember(Adventurer3);

        //Triceratops Enemy1("Herman", 1, 2, 3, 4, 5);
        //Triceratops Enemy2("Elsa", 3, 4, 5, 6, 7);
        //Triceratops Enemy3("Elsa", 3, 4, 5, 6, 7);

        //Enemies.SetName("The Bad");
        //Enemies.AddMember(Enemy1);
        //Enemies.AddMember(Enemy2);
        //Enemies.AddMember(Enemy3);

    }

    void Game::Input()
    {
        // Get input from the user
        // The input character is expected to be uppercase only!

        if (!inCombat)
        {
            switch(input)
            {
            case 'W': // go north
                break;
            case 'A': // go west
                break;
            case 'D': // go east
                break;
            case 'S': // go south
                break;
            case 'Q': // quit
                quit = true;
            }
            // wasd to move around the map
        }
        else
        {
            // select actions for the current turn
            // complete the turn
        }
    }

    void Game::Update()
    {
        if (!inCombat)
        {
            // party is free to explore the map

            // if encounter enemy at map location
            // then fight or flight?
            inCombat = true;
        }
        else
        {
            inCombat = turn.Next();
        }
        // Update game state
        //std::cout << Tucker.GetAttackDamageValue(AttackActions::AttackStomp);
    }

    void Game::Render()
    {
        if (display.NeedsRefresh())
        {
            // Update the screen
            display.DrawRect(Rectangle(5, 5, 10, 10));
            display.RenderMap(map, location);
            display.Invalidate(false);
        }
    }

    
}
