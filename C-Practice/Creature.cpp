#include "Creature.h"

std::string Creature::getName()
{
    return name;
}

int Creature::getStrength()
{
    return str;
}

int Creature::getDexterity()
{
    return dex;
}

int Creature::getConstitution()
{
    return con;
}

int Creature::getCharisma()
{
    return cha;
}

int Creature::getInventorySize(int strength)
{
    int inventory_size = 1 + strength;
    return inventory_size;
}

int Creature::getMaxWeight(int strength, int constitution)
{
    int weight_constant = strength * constitution;
    int max_weight = 5 + weight_constant;   
    return max_weight;
}
