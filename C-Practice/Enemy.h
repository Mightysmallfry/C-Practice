#pragma once
#include "Creature.h"


class Enemy :
    public Creature
{
public:
    Enemy(){};
    Enemy(std::string enemy_name, int strength, int dexterity, int constitution, int charisma) 
        : Creature(enemy_name, strength, dexterity, constitution, charisma) {};



private:


    bool isHostile{ true };
    

};

