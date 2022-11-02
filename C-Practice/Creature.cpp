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

int Creature::GetHpMaximum()
{
    return hp_maximum;
}

int Creature::GetHpCurrent()
{
    return hp_current;
}

void Creature::SetHpMaximum(int newMaxHp)
{
    hp_maximum = newMaxHp;
}

void Creature::SetHpCurrent(int newHp)
{
    hp_current = newHp;
}

bool Creature::GetIsDead(int curHp)
{
    if (curHp <= 0)
    {
        is_dead = true;
    }
    return is_dead;
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
    std::cout << "Alive: " << GetIsDead(GetHpCurrent()) << std::endl;// will print 0 if alive
    std::cout << "Strength: " << GetStrength() << std::endl;
    std::cout << "Dexterity: " << GetDexterity() << std::endl;
    std::cout << "Consitution: " << GetConstitution() << std::endl;
    std::cout << "Charisma: " << GetCharisma() << std::endl;

}
