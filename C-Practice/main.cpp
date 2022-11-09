//#include <iostream>
//#include <string>
//#include <vector>

#include <algorithm>


#include "Item.h"
#include "Weapon.h"
#include "Creature.h"
#include "Dinosaur.h"
#include "Conflict.h"



std::string GetGoodInput(std::string outputSentence) //will mimic python for structure.
{
    std::string input;
    std::cout << outputSentence << std::endl;
    std::cin >> input;
    //maybe getline, remove spaces
    std::transform(input.begin(), input.end(), input.begin(), std::tolower);

    return input;
}


int main()
{
    //Creature neutralEntity; //Default values are of a dog

    //neutralEntity.ToString();

    //===================================================== Dinosaur Class

    //TODO: Make a Class:Dinosaur that inherits from Class:Creature
        // includes new stomp and tail attack, and block actions.
        

    //TODO: Give Dinosaur Class a default constructor that is different from Creature's
        //Make the Default a Triceratops

    //Dinosaur dinosaurEntity;
    //Dinosaur dinosaurEntity ("Stegosaurus", 4, 5, 3, 6);

    //dinosaurEntity.ToString();    
   
    //===================================================== Conflict Class
    //TODO: Make a Class:Conflict which will handle battles between two creatures/dinosaurs
        // Must have turn based functions.
            //Find what creatures it has, find what attacks each creature has

    Conflict battle;
    Dinosaur Stegosaurus("Stegosaurus", 4, 5, 3, 6);
    Dinosaur TyranousRex("T-Rex", 10, 3, 5, 4);
    

    //std::cout << TyranousRex.GetActions(true, TyranousRex.creatureActions) << std::endl;
    battle.BeginFight(TyranousRex, Stegosaurus);
    //====================================================== Item Class


    //Item itemEntity; //Default Constructor
    //Item itemEntity("Ball", 2, 3);

    //Weapon weaponEntity; 
    //Weapon weaponEntity("Dagger", 3,2,5,"Piercing");

    //itemEntity.toString();
    //weaponEntity.toString();

    //====================================================== Good Input

    //std::cout << GetGoodInput("Hey Please Enter All Capitals to See if they become Lowercase");


}