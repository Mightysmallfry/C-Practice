#pragma once

#include "Utilities.h"

class Attack
{
public:
	Attack() {}
	Attack(const std::string aName, AttackActions attackName, DamageTypes damageType, int damageVal, int targetNum)
		: name(aName), attack_name(attackName), damage_type(damageType), damage_value(damageVal), target_number(targetNum) {}

	virtual void InitAttacks();
	virtual void AddAttack(AttackActions attack) ; // Adds the input action to the array of available attacks
	virtual Attack GetAttackAttributes(AttackActions attack); // compares input to array of available attacks
	

	AttackActions GetAttackName();
	std::string GetAttackStrName();
	DamageTypes GetDamageType();
	int GetAttackDamageValue(AttackActions attack); 
	int GetAttackTargetNumber(AttackActions attack);
	int GetAttackCooldown();

	//TODO: Think about a ToStringAttacks() function that prints the attacks of the creature

	std::vector<Attack> attackVector;
private:
	std::string name{};
	AttackActions attack_name{ AttackActions::None };
	DamageTypes damage_type{ DamageTypes::None };
	int damage_value{ 0 };
	int target_number{ 0 };
	int cooldown{ 0 };
};

