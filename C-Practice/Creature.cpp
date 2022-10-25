#include "Creature.h"

std::string Creature::GetName()
{
    return name;
}

int Creature::GetStrength() const
{
    return str;
}

int Creature::GetDexterity() const
{
    return dex;
}

int Creature::GetConstitution() const
{
    return con;
}

int Creature::GetCharisma() const
{
    return cha;
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
