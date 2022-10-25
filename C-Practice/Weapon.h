#pragma once

#include "Item.h"


class Weapon:public Item
{
public:
	Weapon() : Item() {};
	Weapon(const std::string& name, const int size, const float weight, const int damage, const std::string& damagetype) 
		: Item(name, size, weight), damage(damage), damage_type(damagetype) {}


	int getDamage();
	std::string getDamageType();

	void toString();

private:

	int damage{6};
	const std::string damage_type{"Slashing"}; // possible future change to enum

};

