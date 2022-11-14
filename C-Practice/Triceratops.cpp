#include "Triceratops.h"

int Triceratops::GetAttackDamage(Attack& attack)
{
	return attack.damage_value;
}

void Triceratops::SetAttack(Attack& attack, std::string name, AttackActions attackName, DamageTypes damageType, int damageVal, int targetNum)
{
	attack.name = name;
	attack.attack_name = attackName;
	attack.damage_type = damageType;
	attack.damage_value = damageVal;
	attack.target_number = targetNum;
}

Attack Triceratops::GetAttack(Attack& attack)
{
	return attack;
}
