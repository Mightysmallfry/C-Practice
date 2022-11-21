#pragma once

#include "Creature.h"


class Dinosaur :
    public Creature
{
public:
    Dinosaur()
    : Creature("Base Dinosaur", 7, 5, 10, 0, 0) {}

    Dinosaur(const std::string& name, const int strength, const int dexterity, const int constitution, const int charisma, const int arcana)
        : Creature(name, strength, dexterity, constitution, charisma, arcana) {}



    Attack GetAttackAttributes(AttackActions attack);
    void AttacksToString();

private:
    

};

