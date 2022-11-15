#pragma once

#include "Attack.h"
#include "Utilities.h"

class Creature
{
public:
	Creature() {};
	Creature(std::string creature_name, int strength, int dexterity, int constitution, int charisma) {
		name = creature_name;
		str = strength;
		dex = dexterity;
		con = constitution;
		cha = charisma;
	}

	std::string GetName() const;
	int GetStrength() const;
	int GetDexterity() const;
	int GetConstitution() const;
	int GetCharisma() const;

	int GetHpMaximum();
	int GetHpCurrent();

	void SetHpMaximum(int newMaxHp); //different calculation for enemies, npcs and players
	void SetHpCurrent(int newHp);


	bool GetIsDead(int curHp); //check if creature is dead


    static int GetInventorySize(int strength); //don't think I want static, each enemy (and npc) has their own inventory that the player can take from.
    static int GetMaxWeight(int strength, int constitution);

	int GetBlockDamage();
	void SetBlockDamage(int newBlockDamage);



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


