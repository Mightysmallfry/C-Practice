#include "HitPoints.h"

int HitPoints::GetHpCurrent()
{
	return currentHitpoints;
}

int HitPoints::GetHpMaximum()
{
	return maximumHitpoints;
}

int HitPoints::GetArmorCurrent()
{
	return currentArmor;
}

int HitPoints::GetArmorMaximum()
{
	return maximumArmor;
}

int HitPoints::GetMagicForceCurrent()
{
	return currentMagicForce;
}

int HitPoints::GetMagicForceMaximum()
{
	return maximumMagicForce;
}

bool HitPoints::GetIsDead()
{
	if (GetHpCurrent() == 0)
	{
		isDead = true;
	} 
	return isDead;
}

void HitPoints::SetHpCurrent(int newCurrentHp)
{
	currentHitpoints = newCurrentHp;
}

void HitPoints::SetHpMaximum(int newMaximumHp)
{
	maximumHitpoints = newMaximumHp;
}

void HitPoints::SetArmorCurrent(int newCurrentArmor)
{
	currentArmor = newCurrentArmor;
}

void HitPoints::SetArmorMaximum(int newMaximumArmor)
{
	maximumArmor = newMaximumArmor;
}

void HitPoints::SetMagicForceCurrent(int newCurrentMagicForce)
{
	currentMagicForce = newCurrentMagicForce;
}

void HitPoints::SetMagicForceMaximum(int newMaximumMagicForce)
{
	maximumMagicForce = newMaximumMagicForce;
}

void HitPoints::SetIsDead(bool is_dead)
{
	isDead = is_dead;
}

void HitPoints::TakeDamage(Attack& attack)
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
