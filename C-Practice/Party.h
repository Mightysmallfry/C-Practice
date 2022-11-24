#pragma once
#include "Creature.h"

namespace Jurassic
{
    class Party
    {
    public:
        static constexpr size_t MAX_CREATURES{ 3 };

        Party();
        void AddMember(const Creature& creature);
        void DeleteMember(const std::string& creature_name);

        void SetName(const std::string& party_name);
        std::string GetName();

    private:
        std::string partyName {};
        std::vector<Creature> creatureVector;
        std::vector<Creature>::iterator it;
    };
}
