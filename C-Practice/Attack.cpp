#include "Attack.h"

void Attack::InitAttacks() {}

void Attack::AddAttack(AttackActions attack)
{
}

Attack Attack::GetAttackAttributes(AttackActions attack)
{
	return Attack();
}

void Attack::AttacksToString() {}

AttackActions Attack::GetAttackName()
{
	return attack_name;
}

std::string Attack::GetAttackStrName()
{
	return name;
}

DamageTypes Attack::GetDamageType()
{
	return damage_type;
}

int Attack::GetAttackDamageValue(AttackActions attack)
{
	int ret_damage = -1;

	for (int i = 0; i < size(attackVector); i++)
	{
		if (attack == attackVector[i].attack_name) {
			ret_damage = attackVector[i].damage_value;
		}
	}
	
	if (ret_damage == -1)
	{
		std::cout << "Possible error in Attack::GetAttackDamageValue" << std::endl;
	}


	return ret_damage;
}

int Attack::GetAttackTargetNumber(AttackActions attack)
{
	int ret_target_num = -1;

	for (int i = 0; i < size(attackVector); i++)
	{
		if (attack == attackVector[i].attack_name) {
			ret_target_num = attackVector[i].target_number;
		}
	}

	if (ret_target_num == -1)
	{
		std::cout << "Possible error in Attack::GetAttackTargetNumber" << std::endl;
	}


	return ret_target_num;
}
