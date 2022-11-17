#include "Dinosaur.h"
#include <typeinfo> //For Debugging


void Dinosaur::InitAttacks()
{
	Attack BaseAttack("BaseAttack", AttackActions::None, DamageTypes::None, 0, 0);

	attackVector.push_back(BaseAttack);
}

void Dinosaur::InitDamageRes()
{
	damageResVector.push_back(DamageTypes::None);
}

Attack Dinosaur::GetAttackAttributes(AttackActions attack)
{
	Attack ret_attack;

	for (int i = 0; i < size(attackVector); i++)
	{
		if (attack == attackVector[i].GetAttackName())
		{
			ret_attack = attackVector[i];
		}
	}

	if (ret_attack.GetAttackStrName() == "")
	{
		std::cout << "Possible error with Dinosaur::GetAttackAttributes" << std::endl;
	}

	return ret_attack;
}

void Dinosaur::AttacksToString()
{
	for (int i = 0; i < size(attackVector); i++)
	{
		std::cout << attackVector[i].GetAttackStrName() << std::endl;
	}
}
