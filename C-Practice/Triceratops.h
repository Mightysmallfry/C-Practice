#pragma once

#include "Dinosaur.h"


class Triceratops :
    public Dinosaur
{
public:
    Triceratops() 
    : Dinosaur("Triceratops", 7, 5, 10, 0) {}

    Triceratops(const std::string& name, const int strength, const int dexterity, const int constitution, const int charisma)
        : Dinosaur(name, strength, dexterity, constitution, charisma) {}

    //Goal is to be able to call this as Triceratops.GetAttackDamage(AttackActions::AttackStomp)
    

    int GetAttackDamage(Attack& attack);

    void SetAttack(Attack& attack, std::string name, AttackActions attackName, DamageTypes damageType, int damageVal, int targetNum);
    Attack GetAttack(Attack& attack);


    // There would be a large array/list of available attacks
    // Then depending on the creature you can tell the creature class if they have the attack or not
    // Each unique creature has their own class that holds their available attacks with the corresponding attack attributes (damage, targetNum etc)




private:
    Attack Stomp;
    Attack Charge;

};

