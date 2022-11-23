#pragma once

#include "Attack.h"
#include "HitPoints.h"
#include "StatBlock.h"
#include "ElementalAffinity.h"
#include "Utilities.h"

class Creature :
	public HitPoints, public StatBlock, public ElementalAffinity
{
public:
	Creature() {};
	Creature(std::string creature_name, int strength, int dexterity, int constitution, int charisma, int arcana)
		: StatBlock(strength, dexterity, constitution, charisma, arcana) {}

	//Initializers
	virtual void InitAttacks();
	virtual void InitElementalAffinity();
	virtual void InitHitPoints();

	std::vector<Attack> attackVector; // A vector that holds all attacks available
	std::vector<ElementalAffinity> elementalAffVector; // A Vector that holds all Elemental Affinities


	//Game Needs to Know
	std::string GetName() const;
	virtual void Update() = 0;
	inline bool GetIsSelected() { return isSelected; };
	inline void SetIsSelected(bool is_selected) { isSelected = is_selected; };


	inline int GetHpConst() { return HPConst; };
	inline int GetArConst() { return ARConst; };
	inline int GetMfConst() { return MFConst; };

	//TODO: change the Calc Functions to return ints
	virtual void CalcHpMaximum(int constitution); // HPmax = Constitution * 10
	virtual void CalcArmorMaximum(int strengthOrDexterity); // ARmax = Strength * 2 || Dexterity * 2
	virtual void CalcMagicForceMaximum(int arcana); // new stat MFmax = magic * 2


	//Combat Related Things
	void TakeDamage(Attack& incoming_attack);

	Attack GetAttackAttributes(std::string attack_str_name); 

	//TODO: Refactor Inventory System.



private: 
	std::string name{ "Base Creature" };
	bool isSelected{ false };


	//may not want these to be type const in the future (thinking items)
	static const int HPConst = 10;
	static const int ARConst = 2;
	static const int MFConst = 2;







};


