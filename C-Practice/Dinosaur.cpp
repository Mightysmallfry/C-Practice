#include "Dinosaur.h"
#include <typeinfo> //For Debugging


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
