#pragma once
#include "Creature.h"



class Dinosaur :
    public Creature
{
public:
    Dinosaur()
        : Creature() {}

    Dinosaur(const std::string& name, const int strength, const int dexterity, const int constitution, const int charisma)
        : Creature(name, strength, dexterity, constitution, charisma) {}


    int AttackStomp(); //deals damage equal to strength * 2
    int AttackTail(); //deals damage equal to dexterity + strength

    int DamageBlock(); //reduces damage by constitution




private:
    



};

