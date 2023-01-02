#include "Utilities.h"

namespace Jurassic
{
    std::ostream& operator<<(std::ostream& os, RarityTypes rarity)
    {
        std::string str;
        switch (rarity)
        {
        case RarityTypes::Common:
            str = "Common";
            break;

        case RarityTypes::Uncommon:
            str = "Uncommon";
            break;

        case RarityTypes::Rare:
            str = "Rare";
            break;

        case RarityTypes::VeryRare:
            str = "VeryRare";
            break;

        case RarityTypes::Legendary:
            str = "Legendary";
            break;

        case RarityTypes::Mythic:
            str = "Mythic";
            break;
        }

        os << str;
        return os;
    }
}
