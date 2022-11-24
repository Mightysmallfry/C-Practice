#pragma once

#include "Creature.h"
#include "StatBlock.h"


namespace Jurassic
{
    class Dinosaur :
        public Creature
    {
    public:
        Dinosaur()
            : Creature("Base Dinosaur", 7, 5, 10, 0, 0) {}

        //Dinosaur(std::string Name, const StatBlock& statblock)
        //    : Creature(Name, statblock){}

        Dinosaur(const std::string& name, const int strength, const int dexterity, const int constitution, const int charisma, const int arcana)
            : Creature(name, strength, dexterity, constitution, charisma, arcana) {}

        //void Update() = 0;

        Attack GetAttackAttributes(AttackActions attack);
        void AttacksToString();

        void CalcHpMaximum(int constitution) override;
        void CalcArmorMaximum(int strengthOrDexterity) override; 
        void CalcMagicForceMaximum(int arcana) override;

    private:
    };

    
}
