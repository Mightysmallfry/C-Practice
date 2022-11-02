#include "Dinosaur.h"

int Dinosaur::AttackStomp()
{
    return (GetStrength() * 2);
}

int Dinosaur::AttackTail()
{
    return (GetDexterity() + GetStrength());
}

int Dinosaur::DamageBlock()
{
    return GetConstitution();
}
