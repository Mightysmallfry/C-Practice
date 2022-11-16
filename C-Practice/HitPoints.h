#pragma once

#include "Utilities.h"
#include "Attack.h"

class HitPoints
{
public:

	HitPoints() {};

	int GetHpCurrent();
	int GetHpMaximum();
	
	int GetArmorCurrent();
	int GetArmorMaximum();

	void TakeDamage(Attack& attack);


	void SetHpCurrent();
	void SetHpMaximum();
	void SetArmorCurrent();
	void SetArmorMaximum();

private:
	bool isDead;

	//HitPoints, hp that is used up last and will result in the creature dying if reduced to 0
	int currentHitpoints;
	int maximumHitpoints;


	//Armor, hp that is used first and can be 0 without the creature dying
	int currentArmor; 
	int maximumArmor;



};

