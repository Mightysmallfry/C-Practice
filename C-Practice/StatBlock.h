#pragma once

#include "Utilities.h"

class StatBlock
{
public:
	StatBlock() {};
	StatBlock(int startingStrength, int startingDexterity, int startingConstitution, int startingCharisma)
		: strength() {}

	int GetStrength();
	int GetDexterity();
	int GetConstitution();
	int GetCharisma();

	void SetStrength(int newStrength);
	void SetDexterity(int newDexterity);
	void SetConstitution(int newConstitution);
	void SetCharisma(int newCharisma);



private:

	//Basic Stats
	int strength{ 1 };
	int dexterity{ 1 };
	int constitution{ 1 };
	int charisma{ 1 };

	//Advanced Stats
	//int arcane; //magic stat
	


};

