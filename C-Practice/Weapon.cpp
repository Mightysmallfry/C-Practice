#include "Weapon.h"



int Weapon::getDamage()
{
	return damage;
}

std::string Weapon::getDamageType()
{
	return damage_type;
}

void Weapon::toString()
{
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Size: " << getSize() << std::endl;
	std::cout << "Weight: " << getWeight() << std::endl;
	std::cout << "Damage: " << getDamage() << std::endl;
	std::cout << "DamageType: " << getDamageType() << std::endl;
	std::cout << "NumOfItem: " << getNumOfItem() << std::endl;

}
