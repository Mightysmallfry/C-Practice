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
