#pragma once

#include "Utilities.h"
#include "ElementalAffinity.h"

namespace Jurassic
{
    class StatBlock
    {
    public:
        StatBlock() {};

        StatBlock(int starting_strength, int starting_dexterity, int starting_constitution,
                  int starting_charisma, int starting_arcana)
            : baseStrength(starting_strength), baseDexterity(starting_dexterity), baseConstitution(starting_constitution),
              baseCharisma(starting_charisma), baseArcana(starting_arcana) {}

        int GetBaseStrength() const;
        int GetBaseDexterity() const;
        int GetBaseConstitution() const;
        int GetBaseCharisma() const;
        int GetBaseArcana() const;

        int GetStrength() const;
        int GetDexterity() const;
        int GetConstitution() const;
        int GetCharisma() const;
        int GetArcana() const;

        void SetStrength(int new_strength);
        void SetDexterity(int new_dexterity);
        void SetConstitution(int new_constitution);
        void SetCharisma(int new_charisma);
        void SetArcana(int new_arcana);

        //Basic Leveling
        int GetCurrentExp();
        int GetMaximumExp();
        int GetCurrentLevel();
        int GetMaximumLevel();

        void SetCurrentExp(int newCurExp);
        void SetMaximumExp(int newMaxExp);
        void SetCurrentLevel(int newCurLevel);
        void SetMaximumLevel(int newMaxLevel);
        
        void ToString();

    private:
        //Basic Leveling 
        int currentExp{ 0 };
        int maximumExp{ 100 };
        int currentLevel{ 1 };
        int maximumLevel{ 100 };

        //Basic Stats
        const int baseStrength{ 1 };
        const int baseDexterity{ 1 };
        const int baseConstitution{ 1 };
        const int baseCharisma{ 1 };
        const int baseArcana{ 1 }; // For future calculations with elemental affinity

        //Current Stats
        int strength { GetBaseStrength() };
        int dexterity { GetBaseDexterity() };
        int constitution { GetBaseConstitution() };
        int charisma { GetBaseCharisma() };
        int arcana { GetBaseArcana() };
    };

}
