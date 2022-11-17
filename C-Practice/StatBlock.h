#pragma once

#include "Utilities.h"

class StatBlock
{
public:
	StatBlock() {};
	StatBlock(int startingStrength, int startingDexterity, int startingConstitution, int startingCharisma)
		: strength(startingStrength), dexterity(startingDexterity), constitution(startingConstitution), charisma(startingCharisma) {}

	int GetStrength();
	int GetDexterity();
	int GetConstitution();
	int GetCharisma();
	
	void SetStrength(int newStrength);
	void SetDexterity(int newDexterity);
	void SetConstitution(int newConstitution);
	void SetCharisma(int newCharisma);

	//Basic Leveling
	int GetCurrentExp();
	int GetMaximumExp();
	int GetCurrentLevel();
	int GetMaximumLevel();
	
	void SetCurrentExp(int newCurExp);
	void SetMaximumExp(int newMaxExp);
	void SetCurrentLevel(int newCurLevel);
	void SetMaximumLevel(int newMaxLevel);


	//Advanced Stats
	virtual void InitDamageRes();
	void RemoveDamageRes(DamageTypes removedDamageType); 
	//TODO: Fix StatBlock::RemoveDamageRes, basic idea is down, error right now which is bad

	std::vector<DamageTypes> damageResVector;

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

	//TODO: Implement Advanced Stats 
	//These are for elemental specific skills, or ways to deal damage which would be specific to each dinosaur 
	// Magic Stat determines damage
	// Affinity determines bonus damage/ability to gain corresponding resistence
	// 
	// int arcane; //Magic Damage Value
	// int mana; //Limits the usage of elemntal attacks?
	// 
	// DamageTypeAffinity Score? Fire
	// DamageTypeAffinity Score? Cold
	// DamageTypeAffinity Score? Lightning
	// 

};

