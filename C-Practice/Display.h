#pragma once

#include "Utilities.h"
#include "Dinosaur.h"
#include "AllDinosaurs.h"
#include "HitPoints.h"
#include "StatBlock.h"

class Display
{
public:
	Display() {};

	//Initializers
	static void CreateDisplay(int console_width, int console_height);

	//Gameloop||Runtime
	static void Update();

	static void DrawTextBox(); //For drawing the story boxes of people's interacted speech

	//Display Errors
	static void DisplayError(); //Will take in error code


	//Draw Game HUD

	static void DrawRow(int width);
	static void DrawColumn(int height);
	
	//GetGameMaximumHeight is console height
	//GetGameMaximumWidth is console width

	static void DrawAsSelected(); //Draws the object but with brackets around them ie. Unselected [Selected] Unselected



	//Draw Game Elements
	static void DisplayDinosaur(); //Displays the dinosaur name and calls other functions
	static void DisplayDinosaurStats(); //Displays the dinosaur Stats
	static void DisplayDinosaurAttacks(); //Displays the dinosaur Attacks 


private:



};

