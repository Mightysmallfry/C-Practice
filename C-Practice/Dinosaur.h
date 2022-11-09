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

    int GetActions(bool isPlayer, std::vector<std::string> actionVector); //returns the vector containing this dinosaurs available actions

    //Attempt to use a hashtable
    //typedef int* FnPtr;
    //std::map<std::string, FnPtr> dinosaurMap =
    //{
    //    {"Stomp", AttackStomp()},
    //    {"Tail", AttackTail()},
    //    {"Block", DamageBlock()}
    //};

    std::vector<std::string> creatureActions = { "Block", "Stomp", "Tail" }; // index 0 always reserved for blocking

private:
    


};

