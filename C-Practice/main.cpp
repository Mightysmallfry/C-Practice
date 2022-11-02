//#include <iostream>
//#include <string>
//#include <vector>

#include "Item.h"
#include "Weapon.h"
#include "Creature.h"
#include "Dinosaur.h"
#include "Conflict.h"

int main()
{
    //Creature neutralEntity("T-Rex", 10, 3, 5, 4);
    //Creature neutralEntity;

    //neutralEntity.ToString();


    //TODO: Make a Class:Dinosaur that inherits from Class:Creature
        // includes new stomp and tail attack

    //Dinosaur dinosaurEntity; // Want default dinosaur to be triceratops
    //Dinosaur dinosaurEntity ("Stegosaurus", 4, 5, 3, 6);


    //dinosaurEntity.ToString();


    //std::cout << Triceratops.AttackStomp() << std::endl;

    //TODO: Make a Class:Conflict which will handle battles between two creatures/dinosaurs
        // Must have turn based functions.
            //Find what creatures it has, find what attacks each creature has

    Conflict battle;
    Dinosaur Stegosaurus("Stegosaurus", 4, 5, 3, 6);
    Dinosaur TyranousRex("T-Rex", 10, 3, 5, 4);

    battle.BeginFight(TyranousRex, Stegosaurus);

    //Item itemEntity; //Default Constructor
    //Item itemEntity("Ball", 2, 3);

    //Weapon weaponEntity; 
    //Weapon weaponEntity("Dagger", 3,2,5,"Piercing");

    //itemEntity.toString();
    //weaponEntity.toString();

}