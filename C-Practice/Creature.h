#pragma once

#include "Attack.h"
#include "HitPoints.h"
#include "StatBlock.h"
#include "ElementalAffinity.h"
#include "Utilities.h"

class Creature :
	public HitPoints, public StatBlock, public ElementalAffinity, public Attack
{
public:
	Creature() {};
	Creature(std::string creature_name, int strength, int dexterity, int constitution, int charisma, int arcana)
		: StatBlock(strength, dexterity, constitution, charisma, arcana) {}

	//Initializers

	virtual void InitAttacks();
	virtual void InitElementalAffinity();


	//Game Needs to Know
	std::string GetName() const;
	virtual void Update() = 0;
	inline bool GetIsSelected() { return isSelected; };
	inline void SetIsSelected(bool is_selected) { isSelected = is_selected; };


	//TODO: Refactor Stats into a class
	//Need to work on Advanced Stats


	inline int GetHpConst() { return HPConst; };
	inline int GetArConst() { return ARConst; };
	inline int GetMfConst() { return MFConst; };

	//virtual in case dinosaurs/velociraptors dexterity instead of strength
	virtual void CalcHpMaximum(int constitution); // HPmax = Constitution * 10
	virtual void CalcArmorMaximum(int strength); // ARmax = Strength * 2 || Dexterity * 2
	virtual void CalcMagicForceMaximum(int arcane); // new stat MFmax = magic * 2


	//TODO: Refactor Inventory System.
	int GetInventorySize(int strength); //don't think I want static, each enemy (and npc) has their own inventory that the player can take from.
	int GetMaxWeight(int strength, int constitution);


private: 
	std::string name{ "Base Creature" };
	bool isSelected{ false };


	//may not want these to be type const in the future (thinking items)
	static const int HPConst = 10;
	static const int ARConst = 2;
	static const int MFConst = 2;

};


