#pragma once

#include "Attack.h"
#include "HitPoints.h"
#include "StatBlock.h"
#include "Utilities.h"

class Creature :
	public HitPoints, public StatBlock
{
public:
	Creature() {};
	Creature(std::string creature_name, int strength, int dexterity, int constitution, int charisma)
		: StatBlock(strength, dexterity, constitution, charisma) {}

	//Game Needs to Know
	std::string GetName() const;
	virtual void Update() = 0;


	//TODO: Refactor Stats into a class
	//Refactored HP/Damage and Block System 
	//Need to work on Advanced Stats

	//virtual in case dinosaurs/velociraptors dexterity instead of strength

	inline int GetHpConst() { return HPConst; };
	inline int GetArConst() { return ARConst; };
	inline int GetMfConst() { return MFConst; };

	virtual void CalcHpMaximum(int constitution); // HPmax = Constitution * 10
	virtual void CalcArmorMaximum(int strength); // ARmax = Strength * 2 || Dexterity * 2
	virtual void CalcMagicForceMaximum(int magic); // new stat MFmax = magic * 2


	//TODO: Refactor Inventory System.
	int GetInventorySize(int strength); //don't think I want static, each enemy (and npc) has their own inventory that the player can take from.
	int GetMaxWeight(int strength, int constitution);


private: 
	std::string name{ "Base Creature" };
	
	//may not want these to be type const in the future (thinking items)
	static const int HPConst = 10;
	static const int ARConst = 2;
	static const int MFConst = 2;

};


