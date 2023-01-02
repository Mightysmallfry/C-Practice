#pragma once

#include "Display.h"
#include "Map.h"
#include "Party.h"
#include "Turn.h"
#include "Utilities.h"

namespace Jurassic
{
    class Game
    {
    public:
        int Run();

    protected:
        void Setup();
        void Input();
        void Update();
        void Render();

    private:
        Turn turn;
        //Party Adventurers;
        //Party Enemies;

    private:
        bool quit{ false };
        char input;
        bool inCombat{ false };

        //Display display{};
        //Map map{};
        //Point location{};

    };
}
