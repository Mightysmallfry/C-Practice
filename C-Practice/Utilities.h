#pragma once


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include <algorithm>

namespace Jurassic
{
    inline void SetCursorPosition(int x, int y)
    {
        COORD coord;

        coord.X = x;
        coord.Y = y;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }


    inline int GetConsoleWidth() //inline to make it faster since the function will be smaller.
    {
        CONSOLE_SCREEN_BUFFER_INFO csbi;

        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        int console_width = csbi.srWindow.Right - csbi.srWindow.Left + 1; //these are up to but not don't include the farthest right point

        return console_width;
    }

    inline int GetConsoleHeight()
    {
        CONSOLE_SCREEN_BUFFER_INFO csbi;

        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        int console_height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1; //these are up to but not don't include the lowest bottom point

        return console_height;
    }


    inline int GetScreenWidth() {
        RECT desktop;
        HWND hDesktop = GetDesktopWindow(); //window Handle

        GetWindowRect(hDesktop, &desktop);

        return desktop.right;
    }

    inline int GetScreenHeight() {
        RECT desktop;
        HWND hDesktop = GetDesktopWindow();

        GetWindowRect(hDesktop, &desktop);

        return desktop.bottom;
    }


    //==================================== Creature Utilities

    //TODO: Turn utilities into a class, make others inherit, protect and reduce vector multiples

    enum class AttackActions { // Has to contain all attack actions available to creatures
        None,
        AttackTail,
        AttackStomp,
        AttackCharge,
        AttackBreath
    };

    enum class DamageTypes { // Has to contain all damage types available to creatures
        None,
        Slashing,
        Piercing,
        Bludgeoning,
        Fire,
        Cold,
        Lightning
    };

    const std::string DamageTypeStrNames[] =
    {
        "None",
        "Slashing",
        "Piercing",
        "Bludgeoning",
        "Fire",
        "Cold",
        "Lightning"
    };

    enum class RarityTypes { // Has to contain all damage types available
        Common,
        Uncommon,
        Rare,
        VeryRare,
        Legendary,
        Mythic
    };

    enum class StatusTypes {
        None,
        Burning,
        Slowed,
        Frozen,
        Jolted
    };

    enum class BuffTypes {
        None,
        Attack,
        Health,
        Armor,
        MagicForce
    };
}
