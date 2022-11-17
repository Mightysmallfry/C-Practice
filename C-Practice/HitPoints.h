#pragma once

#include "Utilities.h"
#include "Attack.h"
#include "StatBlock.h"

class HitPoints
{
public:

	HitPoints() {};
	HitPoints(int max_hp, int max_armor, int max_magic_force) 
		: maximumHitpoints(max_hp), maximumArmor(max_armor), maximumMagicForce(max_magic_force) {
		currentHitpoints = GetHpMaximum();
		currentArmor = 0;
		currentMagicForce = 0;
	};

	int GetHpCurrent();
	int GetHpMaximum();
	
	int GetArmorCurrent();
	int GetArmorMaximum();

	int GetMagicForceCurrent();
	int GetMagicForceMaximum();

	bool GetIsDead();

	void SetHpCurrent(int newCurrentHp);
	void SetHpMaximum(int newMaximumHp);
	void SetArmorCurrent(int newCurrentArmor);
	void SetArmorMaximum(int newMaximumArmor);
	void SetMagicForceCurrent(int newCurrentMagicForce);
	void SetMagicForceMaximum(int newMaximumMagicForce);

	void SetIsDead(bool is_dead);


	//TODO: Update TakeDamage to handle resistences
	void TakeDamage(Attack& attack);


private:
	bool isDead{ false };

	//HitPoints, hp that is used up last and will result in the creature dying if reduced to 0
	int currentHitpoints{ GetHpMaximum() };
	int maximumHitpoints{ 1 };


	//Armor, hp that is used up against normal damage and can be 0 without the creature dying
	int currentArmor{ 0 };
	int maximumArmor{ 0 };

	//Magic Force, hp that is used up only by elemental damage and can be 0 without the creature dying
	int currentMagicForce{ 0 };
	int maximumMagicForce{ 0 };




};

