#pragma once

#include "Dinosaur.h"


class Triceratops :
    public Dinosaur
{
public:
    Triceratops() 
        : Dinosaur("Triceratops", 7, 5, 10, 0) {
        InitAttacks();
        InitDamageRes();
    }

    Triceratops(const std::string& name, const int strength, const int dexterity, const int constitution, const int charisma)
        : Dinosaur(name, strength, dexterity, constitution, charisma) {
        InitAttacks(); 
        InitDamageRes();
    }

    //Initialize Dino
    void InitAttacks(); //Adds the additional attacks that are specific to this creature
    void InitDamageRes(); //Adds the additional damage resistances that are specific to this creature

    //Gameloop
    void Update();

 


private:

    

};

