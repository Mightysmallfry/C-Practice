#pragma once

#include "Dinosaur.h"


class Triceratops :
    public Dinosaur
{
public:
    Triceratops() 
        : Dinosaur("Triceratops", 7, 5, 10, 0, 0) {
        InitAttacks();
    }

    Triceratops(const std::string& name, const int strength, const int dexterity, const int constitution, const int charisma, const int arcana)
        : Dinosaur(name, strength, dexterity, constitution, charisma, arcana) {
        InitAttacks(); 
    }

    //Initializers
    void InitAttacks(); //Adds the additional attacks that are specific to this creature
    void InitElementalAffinity(); 

    //Gameloop||Runtime
    //void Update(Triceratops& self);

    void Update() override;

    //TODO: ToStringSelf() that calls the to string functions of the other classes 


private:

    

};

