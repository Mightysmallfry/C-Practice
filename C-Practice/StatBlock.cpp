#include "StatBlock.h"

int StatBlock::GetStrength()
{
    return strength;
}

int StatBlock::GetDexterity()
{
    return dexterity;
}

int StatBlock::GetConstitution()
{
    return constitution;
}

int StatBlock::GetCharisma()
{
    return charisma;
}

void StatBlock::SetStrength(int newStrength)
{
    strength = newStrength;
}

void StatBlock::SetDexterity(int newDexterity)
{
    dexterity = newDexterity;
}

void StatBlock::SetConstitution(int newConstitution)
{
    constitution = newConstitution;
}

void StatBlock::SetCharisma(int newCharisma)
{
    charisma = newCharisma;
}

int StatBlock::GetCurrentExp()
{
    return currentExp;
}

int StatBlock::GetMaximumExp()
{
    return maximumExp;
}

int StatBlock::GetCurrentLevel()
{
    return currentExp;
}

int StatBlock::GetMaximumLevel()
{
    return maximumLevel;
}

void StatBlock::SetCurrentExp(int newCurExp)
{
    currentExp = newCurExp;
}

void StatBlock::SetMaximumExp(int newMaxExp)
{
    maximumExp = newMaxExp;
}

void StatBlock::SetCurrentLevel(int newCurLevel)
{
    currentLevel = newCurLevel;
}

void StatBlock::SetMaximumLevel(int newMaxLevel)
{
    maximumLevel = newMaxLevel;
}

void StatBlock::InitDamageRes()
{
    damageResVector.push_back(DamageTypes::None);
}

void StatBlock::RemoveDamageRes(DamageTypes removedDamageType)
{
    int position = 0;
    for (int i = 0; i < size(damageResVector); i++, position++)
    {
        if (removedDamageType == damageResVector[i])
        {
            damageResVector.erase(position);
            break;
        }
    }
}

