//#include <iostream>
//#include <string>
//#include <vector>

#include <algorithm> // for the has table 


#include "Item.h"
#include "Weapon.h"
#include "Creature.h"
#include "Dinosaur.h"
#include "Conflict.h"

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include <algorithm>



int main()
{
    //===================================================== Creature Class
    
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

    //===================================================== 

    int nScreenHeight = 120;
    int nScreenWidth = 40;

    //create screen buffer
    wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight];
    HANDLE hconsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hconsole);
    DWORD dwBytesWritten = 0;



    screen[nScreenWidth * nScreenHeight - 1] = '\0';
    WriteConsoleOutputCharacter(hconsole, screen, nScreenWidth*nScreenHeight, {0,0}, &dwBytesWritten);



}