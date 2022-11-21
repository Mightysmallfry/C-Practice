#include "Creature.h"

void Creature::InitAttacks()
{
    Attack BaseAttack("Base Attack", AttackActions::None, DamageTypes::None, 0, 0);

    attackVector.push_back(BaseAttack);
}

void Creature::InitElementalAffinity()
{
    ElementalAffinity None(DamageTypes::None, false);

    elementalAffVector.push_back(None);
}


void Creature::InitHitPoints()
{
    CalcHpMaximum();
    CalcArmorMaximum();
    CalcMagicForceMaximum();
}


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

void Creature::CalcMagicForceMaximum(int arcane)
{
    int newMfMax = arcane * GetMfConst();
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


