#include "Creature.h"

std::string Creature::GetName() const
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




void Creature::ToString()
{
    std::cout << "Name: " << GetName() << std::endl;
    std::cout << "Hp: " << GetHpCurrent() << "/" << GetHpMaximum() << std::endl; 
    std::cout << "Strength: " << GetStrength() << std::endl;
    std::cout << "Dexterity: " << GetDexterity() << std::endl;
    std::cout << "Consitution: " << GetConstitution() << std::endl;
    std::cout << "Charisma: " << GetCharisma() << std::endl;

}
