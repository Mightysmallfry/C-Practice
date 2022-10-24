#pragma once
#include <iostream>
#include <string>

class Creature
{
public:

	Creature(std::string creature_name, int strength, int dexterity, int constitution, int charisma) {
		name = creature_name;
		str = strength;
		dex = dexterity;
		con = constitution;
		cha = charisma;
	}

	std::string getName();
	int getStrength();
	int getDexterity();
	int getConstitution();
	int getCharisma();

	int getInventorySize(int strength);
	int getMaxWeight(int strength, int constitution);



private:
	std::string name;
	int str;
	int dex;
	int con;
	int cha;

};

