#include "Resistances.h"


namespace Jurassic
{
    void Resistances::SetResistanceStrName(DamageTypes damage_type)
    {
        resistanceName = DamageTypeStrNames[static_cast<int>(damage_type)];
    }

    bool Resistances::GetIsResistant(int elemental_level)
    {

        if (hasAffinity == true && elemental_level >= elementalLevelRequirement)
        {
            isResistant = true;
        }

        return isResistant;
    }

    std::string Resistances::GetResistanceStrName()
    {
        return resistanceName;
    }

    void Resistances::SetDRConst(int new_drconst)
    {
        DRConst = new_drconst;
    }
    
}
