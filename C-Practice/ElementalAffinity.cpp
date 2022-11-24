#include "ElementalAffinity.h"

namespace Jurassic
{
    void ElementalAffinity::SetAffinityStrName(DamageTypes element)
    {
        affinityName = DamageTypeStrNames[static_cast<int>(element)];
    }

    void ElementalAffinity::SetElementalAffinity(int new_value)
    {
        elementalAffinity = new_value;
    }

    void ElementalAffinity::SetHasAffinity(bool has_affinity)
    {
        hasAffinity = has_affinity;
    }
    
}
