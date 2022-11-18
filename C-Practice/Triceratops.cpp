#include "Triceratops.h"

void Triceratops::InitAttacks()
{
	Attack Stomp("Stomp", AttackActions::AttackStomp, DamageTypes::Bludgeoning, 5, 1);
	Attack Charge("Charge", AttackActions::AttackCharge, DamageTypes::Piercing, 10, 3);

	attackVector.push_back(Stomp);
	attackVector.push_back(Charge);
}

void Triceratops::InitElementalAffinity()
{
	ElementalAffinity Cold(DamageTypes::Cold, true);
	ElementalAffinity Fire(DamageTypes::Fire, false);
	ElementalAffinity Lightning(DamageTypes::Lightning, false);

	elementalAffVector.push_back(Cold);
	elementalAffVector.push_back(Fire);
	elementalAffVector.push_back(Lightning);
}


void Triceratops::Update(Triceratops& self)
{
	if (self.GetIsDead() != false)
	{
		//~Triceratops(); //TODO: Look into Destructors for Triceratops during Update()
	}

	if (self.GetIsSelected() != false)
	{
		//call display.stat function
	}

}
