#include "Creature.h"


std::vector<DamageTypes> PhysicalDamage = {
	DamageTypes::Slashing,
	DamageTypes::Piercing,
	DamageTypes::Bludgeoning
};

std::vector<DamageTypes> MagicalDamage = {
	DamageTypes::Fire,
	DamageTypes::Cold,
	DamageTypes::Lightning
};



void Creature::InitAttacks()
{
    Attack BaseAttack("Base Attack", AttackActions::None, DamageTypes::None, false, 0, 0);

	attackVector.push_back(BaseAttack);
}

void Creature::InitElementalAffinity()
{
    ElementalAffinity None(DamageTypes::None, false);

    elementalAffVector.push_back(None);
}


void Creature::InitHitPoints()
{
    CalcHpMaximum(GetConstitution());
    CalcArmorMaximum(GetStrength());
    CalcMagicForceMaximum(GetArcana());
}


std::string Creature::GetName() const
{
    return name;
}

void Creature::CalcHpMaximum(int constitution)
{
    int newHpMax = constitution * GetHpConst();
    SetHpMaximum(newHpMax);
}

void Creature::CalcArmorMaximum(int strength)
{
    int newArMax = strength * GetArConst();
    SetArmorMaximum(newArMax);
}

void Creature::CalcMagicForceMaximum(int arcane)
{
    int newMfMax = arcane * GetMfConst();
    SetMagicForceMaximum(newMfMax);
}




void Creature::TakeDamage(Attack& incoming_attack) //Possible future bug with negative damage.
{
	
	bool validAttack = true;
	for (int i = 0; i < size(attackVector); i++)
	{
		if (incoming_attack.GetAttackStrName() != attackVector[i].GetAttackStrName())
		{
			validAttack = false;
		}
	}

	if (!validAttack)
	{
		std::cout << "Not a valid Attack, No damage taken, Location: Creatre::TakeDamage" << std::endl;
		return;
	}


	int newHitPoints = GetHpCurrent() - incoming_attack.GetAttackDamageValue();
	int HpDamage = 0;
	int newArmor = 0;
	int newMagicForce = 0;


	if (GetArmorCurrent() != 0)
	{
		for (int i = 0; i < size(PhysicalDamage); i++)
		{
			if (incoming_attack.GetDamageType() == PhysicalDamage[i])
			{
				if (GetArmorCurrent() < incoming_attack.GetAttackDamageValue())
				{
					HpDamage = incoming_attack.GetAttackDamageValue() - GetArmorCurrent();
				}
				else {
					HpDamage = 0;
					newArmor = GetArmorCurrent() - incoming_attack.GetAttackDamageValue();
					SetArmorCurrent(newArmor);
				}
			}
		}
	}

	if (GetMagicForceCurrent() != 0)
	{

		for (int i = 0; i < size(MagicalDamage); i++)
		{
			if (incoming_attack.GetDamageType() == MagicalDamage[i])
			{
				if (GetMagicForceCurrent() < incoming_attack.GetAttackDamageValue())
				{
					HpDamage = incoming_attack.GetAttackDamageValue() - GetMagicForceCurrent();

				}
				else {
					HpDamage = 0;
					newMagicForce = GetMagicForceCurrent() - incoming_attack.GetAttackDamageValue();
					SetMagicForceCurrent(newMagicForce);
				}
			}
		}
	}

	SetHpCurrent(newHitPoints);
}

Attack Creature::GetAttackAttributes(std::string attack_str_name)
{
	Attack retAttack;
	bool validAttack = false;
	for (int i = 0; i < size(attackVector); i++)
	{
		validAttack = false;
		if (attack_str_name == attackVector[i].GetAttackStrName())
		{
			validAttack = true;
			retAttack = attackVector[i];
		}

		if (i == size(attackVector) && validAttack == false)
		{
			std::cout << "No attack found, location: Creature, GetAttackAttributes" << std::endl;
		}
	}
	return retAttack;
}

