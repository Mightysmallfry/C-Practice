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

int StatBlock::GetArcana()
{
    return arcana;
}

void StatBlock::SetStrength(int new_strength)
{
    strength = new_strength;
}

void StatBlock::SetDexterity(int new_dexterity)
{
    dexterity = new_dexterity;
}

void StatBlock::SetConstitution(int new_constitution)
{
    constitution = new_constitution;
}

void StatBlock::SetCharisma(int new_charisma)
{
    charisma = new_charisma;
}

void StatBlock::SetArcana(int new_arcana)
{
    arcana = new_arcana;
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
