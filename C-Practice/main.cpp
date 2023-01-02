
#include "Utilities.h"

#include "Item.h"
#include "Creature.h"
#include "Dinosaur.h"
//#include "Conflict.h"
#include "Triceratops.h"
#include "Game.h"

using namespace Jurassic;

int main()
{
   



    //===================================================== Creature Class
    
    //Creature neutralEntity; //Default values are of a dog

    //neutralEntity.ToString();

    //===================================================== Dinosaur Class

    //Make a Class:Dinosaur that inherits from Class:Creature
        // includes new stomp and tail attack, and block actions.
        
         
    
    //Give Dinosaur Class a default constructor that is different from Creature's
        //Make the Default a Triceratops

    //Dinosaur dinosaurEntity;
    //Dinosaur dinosaurEntity ("Stegosaurus", 4, 5, 3, 6);

    //dinosaurEntity.ToString();    
   
    //===================================================== Conflict Class
    //Make a Class:Conflict which will handle battles between two creatures/dinosaurs
        // Must have turn based functions.
            //Find what creatures it has, find what attacks each creature has

    //Conflict battle;
    //Dinosaur Stegosaurus("Stegosaurus", 4, 5, 3, 6);
    //Dinosaur TyranousRex("T-Rex", 10, 3, 5, 4);
    

    //std::cout << TyranousRex.GetActions(true, TyranousRex.creatureActions) << std::endl; //For Debugging
    //battle.BeginFight(TyranousRex, Stegosaurus);

    
    //====================================================== Item Class


    //Item itemEntity; //Default Constructor
    //Item itemEntity("Ball", 2, 3);

    //Weapon weaponEntity; 
    //Weapon weaponEntity("Dagger", 3,2,5,"Piercing");

    //itemEntity.toString();
    //weaponEntity.toString();

    //===================================================== Screen/Console API, NOTE: Only Local(in this file) Code
    //Would be better to make this a class
   

    //TODO: Create a Display Class to handle console buffering and writing
    //int nScreenHeight = 120;
    //int nScreenWidth = 40;

    ////create screen buffer

    //HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    //std::cout << consoleColor;
    //DWORD p = 2;
    //SetConsoleTextAttribute(consoleColor, p);

    //wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight];
    //HANDLE hconsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    //SetConsoleActiveScreenBuffer(hconsole);
    //DWORD dwBytesWritten = 0;

    
    //=======================================================

    
    //Game game;
    //game.Run();

    //Item bucket;
    Item knife("Knife", RarityTypes::Mythic, 10, 5, 8, 0, 0);
    Item shovel("Shovel", RarityTypes::Legendary, 5, 0, 8, 5, 5);

    Creature baseCreature;

    //baseCreature.inventory.AddItem(bucket);
    baseCreature.inventory.AddItem(knife);
    baseCreature.inventory.AddItem(shovel);

    std::cout << "SETUP - START" << std::endl;
    baseCreature.ToString();
    baseCreature.inventory.ToString();
    std::cout << "SETUP - COMPLETE" << std::endl;

    int count = 0;
    bool done = false;
    while (!done)
    {
        baseCreature.ToString();
        baseCreature.inventory.ToString();

        baseCreature.Update();

        baseCreature.RemoveItem(shovel); //BUG Remove item does not remove the item nor apply changes to stats

        baseCreature.Update();

        count++;
        if (count == 3)
        {
            done = true;
        }
    }

}

