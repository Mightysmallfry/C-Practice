#pragma once

#include "Creature.h"


class Dinosaur :
    public Creature, public Attack
{
public:
    Dinosaur()
        : Creature("Triceratops", 7, 5, 10, 0) {
        InitAttacks();
    }

    Dinosaur(const std::string& name, const int strength, const int dexterity, const int constitution, const int charisma)
        : Creature(name, strength, dexterity, constitution, charisma) {
        InitAttacks();
    }

    void InitAttacks();

    Attack GetAttackAttributes(AttackActions attack);
    void AttacksToString();

private:
    

};

