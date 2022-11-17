#include "Creature.h"

std::string Creature::GetName() const
{
    return name;
}

void Creature::CalcHpMaximum(int constitution)
{
    int newHpMax = constitution * GetHpConst();
    SetHpMaximum(newHpMax);
}

void Creature::CalcArmorMaximum(int strength)
{
    int newArMax = strength * GetArConst();
    SetArmorMaximum(newArMax);
}

void Creature::CalcMagicForceMaximum(int magic)
{
    int newMfMax = magic * GetMfConst();
    SetMagicForceMaximum(newMfMax);
}

int Creature::GetInventorySize(const int strength)
{
    int inventory_size = 1 + strength;
    return inventory_size;
}

int Creature::GetMaxWeight(const int strength, const int constitution)
{
    int weight_constant = strength * constitution;
    int max_weight = 5 + weight_constant;   
    return max_weight;
}


