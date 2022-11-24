#include "Character.h"

void Character::AddPartyMember(Creature& added_creature)
{
    creatureVector.push_back(added_creature);
}

void Character::RemovePartyMember(Creature& removed_creature)
{
    for (int i = 0; i < size(creatureVector); i++)
    {
        if (removed_creature.GetName() == creatureVector[i].GetName())
        {
            creatureVector[i].erase();
        }
    }
}

int Character::GetPartySize()
{
    return size(creatureVector);
}

int Character::GetPartySizeMaximum()
{
    return maximumPartySize;
}
