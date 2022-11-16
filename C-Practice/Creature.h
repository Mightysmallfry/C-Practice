#pragma once

#include "Attack.h"
#include "HitPoints.h"
#include "Utilities.h"

class Creature :
	public HitPoints
{
public:
	Creature() {};
	Creature(std::string creature_name, int strength, int dexterity, int constitution, int charisma)
		: name(creature_name), str(strength), dex(dexterity), con(constitution), cha(charisma) {}

	std::string GetName() const;
	int GetStrength() const;
	int GetDexterity() const;
	int GetConstitution() const;
	int GetCharisma() const;


	//TODO: Refactor Inventory System.
    int GetInventorySize(int strength); //don't think I want static, each enemy (and npc) has their own inventory that the player can take from.
    int GetMaxWeight(int strength, int constitution);


	//TODO: Refactor HP/Damage and Block System // all will be in hp class

	int CalcHpMaximum(int constitution);
	int CalcArmorMaximum(int strength);
	int CalcMagicForceMaximum(int magic); // new stat



	void ToString();


private: 
	std::string name{};
	int str{7};
	int dex{5};
	int con{10};
	int cha{0};
	
	int hp_maximum{100};
	int hp_current{hp_maximum};
	
	bool is_dead{false};

	int block_damage{ 0 };

};


