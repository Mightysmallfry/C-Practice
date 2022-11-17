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
