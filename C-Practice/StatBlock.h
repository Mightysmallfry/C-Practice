#pragma once

#include "Utilities.h"
#include "ElementalAffinity.h"

class StatBlock
{
public:
	StatBlock() {};
	StatBlock(int starting_strength, int starting_dexterity, int starting_constitution,
			int starting_charisma, int starting_arcana)
		: strength(starting_strength), dexterity(starting_dexterity), constitution(starting_constitution),
			charisma(starting_charisma), arcana(starting_arcana) {}

	int GetStrength();
	int GetDexterity();
	int GetConstitution();
	int GetCharisma();
	int GetArcana();
	
	void SetStrength(int new_strength);
	void SetDexterity(int new_dexterity);
	void SetConstitution(int new_constitution);
	void SetCharisma(int new_charisma);
	void SetArcana(int new_arcana);

	//Basic Leveling
	int GetCurrentExp();
	int GetMaximumExp();
	int GetCurrentLevel();
	int GetMaximumLevel();
	
	void SetCurrentExp(int newCurExp);
	void SetMaximumExp(int newMaxExp);
	void SetCurrentLevel(int newCurLevel);
	void SetMaximumLevel(int newMaxLevel);

	//TODO: Make a ToStringStat() function that prints out all stats

private:

	//Basic Leveling 
	int currentExp{ 0 };
	int maximumExp{ 100 };
	int currentLevel{ 1 };
	int maximumLevel{ 100 };

	//Basic Stats
	int strength{ 1 };
	int dexterity{ 1 };
	int constitution{ 1 };
	int charisma{ 1 };	
	int arcana{ 1 }; // For future calculations with elemental affinity



};

