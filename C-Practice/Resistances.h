#pragma once

#include "Utilities.h"

namespace Jurassic
{
    class Resistances
    {
    public:
        Resistances() {};

        Resistances(DamageTypes damage_type, bool has_affinity)
            : resistanceType(damage_type), hasAffinity(has_affinity)
        {
            GetIsResistant(elementalLevel);
            SetResistanceStrName(damage_type);
        };


        Resistances(DamageTypes damage_type, bool has_affinity, int elemental_level)
            : resistanceType(damage_type), hasAffinity(has_affinity), elementalLevel(elemental_level) 
        {
            GetIsResistant(elemental_level);
            SetResistanceStrName(damage_type);
        };

        void SetResistanceStrName(DamageTypes damage_type);

        std::string GetResistanceStrName();
        bool GetIsResistant(int elemental_level);
        inline DamageTypes GetResistanceType() { return resistanceType; };
        inline int GetElementalLevelReq() { return elementalLevelRequirement; };
        inline int GetDRConst() { return DRConst; };

        void SetDRConst(int new_drconst);


        std::vector<Resistances> elementalResistanceVector;

    private:
        std::string resistanceName{ "Fire" };
        const DamageTypes resistanceType{ DamageTypes::Fire };
        bool isResistant{ false };
        int DRConst{ 2 };

        bool hasAffinity{ false };
        int elementalLevel { 0 };
        int elementalLevelRequirement{ 10 };
    };
}
