#include "Triceratops.h"

void Triceratops::InitAttacks()
{
	Attack Stomp("Stomp", AttackActions::AttackStomp, DamageTypes::Bludgeoning, 5, 1);
	Attack Charge("Charge", AttackActions::AttachCharge, DamageTypes::Piercing, 10, 3);

	attackVector.push_back(Stomp);
	attackVector.push_back(Charge);
}
