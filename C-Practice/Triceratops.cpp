#include "Triceratops.h"

void Triceratops::InitAttacks()
{
	Attack Stomp("Stomp", AttackActions::AttackStomp, DamageTypes::Bludgeoning, 5, 1);
	Attack Charge("Charge", AttackActions::AttachCharge, DamageTypes::Piercing, 10, 3);

	attackVector.push_back(Stomp);
	attackVector.push_back(Charge);
}

void Triceratops::InitDamageRes()
{
	damageResVector.push_back(DamageTypes::Slashing);
}

void Triceratops::Update()
{
	if (GetIsDead() != false)
	{
		//~Triceratops(); //TODO: Look into Destructors for Triceratops during Update()
	}
}
