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
    Attack BaseAttack("Base Attack", AttackActions::None, DamageTypes::None, 0, 0);

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




void Creature::TakeDamage(Attack& attack) //Possible future bug with negative damage.
{
	int newHitPoints = GetHpCurrent() - attack.GetAttackDamageValue(attack.GetAttackName());
	int HpDamage = 0;
	int newArmor = 0;
	int newMagicForce = 0;


	if (GetArmorCurrent() != 0)
	{
		for (int i = 0; i < size(PhysicalDamage); i++)
		{
			if (attack.GetDamageType() == PhysicalDamage[i])
			{
				if (GetArmorCurrent() < attack.GetAttackDamageValue(attack.GetAttackName()))
				{
					HpDamage = attack.GetAttackDamageValue(attack.GetAttackName()) - GetArmorCurrent();
				}
				else {
					HpDamage = 0;
					newArmor = GetArmorCurrent() - attack.GetAttackDamageValue(attack.GetAttackName());
					SetArmorCurrent(newArmor);
				}
			}
		}
	}

	if (GetMagicForceCurrent() != 0)
	{

		for (int i = 0; i < size(MagicalDamage); i++)
		{
			if (attack.GetDamageType() == MagicalDamage[i])
			{
				if (GetMagicForceCurrent() < attack.GetAttackDamageValue(attack.GetAttackName()))
				{
					HpDamage = attack.GetAttackDamageValue(attack.GetAttackName()) - GetMagicForceCurrent();

				}
				else {
					HpDamage = 0;
					newMagicForce = GetMagicForceCurrent() - attack.GetAttackDamageValue(attack.GetAttackName());
					SetMagicForceCurrent(newMagicForce);
				}
			}
		}
	}

	SetHpCurrent(newHitPoints);
}
