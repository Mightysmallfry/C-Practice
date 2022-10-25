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

	std::string GetName();
	int GetStrength() const;
	int GetDexterity() const;
	int GetConstitution() const;
	int GetCharisma() const;

    static int GetInventorySize(int strength);
    static int GetMaxWeight(int strength, int constitution);



private:
	std::string name;
	int str;
	int dex;
	int con;
	int cha;

};

