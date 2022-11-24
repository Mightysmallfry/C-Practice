#include "Party.h"

namespace Jurassic
{
    Party::Party()
    {
        creatureVector.clear();
    }

    void Party::AddMember(const Creature& creature)
    {
        creatureVector.push_back(creature);
    }

    void Party::DeleteMember(const std::string& creature_name)
    {
        for (std::vector<Creature>::iterator it = creatureVector.begin(); it != creatureVector.end(); ++it)
        {
            if (it->GetName() == creature_name)
            {
                creatureVector.erase(it);
            }
        }
    }

    void Party::SetName(const std::string& party_name)
    {
        partyName = party_name;
    }

    std::string Party::GetName()
    {
        return partyName;
    }

    void Party::SetIsDefeated(bool defeated)
    {
        isDefeated = defeated;
    }

    bool Party::GetIsDefeated()
    {
        return isDefeated;
    }
    
}
