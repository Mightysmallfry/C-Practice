#include "StatBlock.h"

namespace Jurassic
{
    int StatBlock::GetBaseStrength() const
    {
        return baseStrength;
    }

    int StatBlock::GetBaseDexterity() const
    {
        return baseDexterity;
    }

    int StatBlock::GetBaseConstitution() const
    {
        return baseConstitution;
    }

    int StatBlock::GetBaseCharisma() const
    {
        return baseCharisma;
    }

    int StatBlock::GetBaseArcana() const
    {
        return baseArcana;
    }

    int StatBlock::GetStrength() const
    {
        return strength;
    }

    int StatBlock::GetDexterity() const
    {
        return dexterity;
    }

    int StatBlock::GetConstitution() const
    {
        return constitution;
    }

    int StatBlock::GetCharisma() const
    {
        return charisma;
    }

    int StatBlock::GetArcana() const
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

    void StatBlock::ToString()
    {
        std::cout << "+++ STATS +++" << std::endl;
        std::cout << "Base Strength: " << GetBaseStrength() << std::endl;
        std::cout << "Strength: " << GetStrength() << std::endl;

        std::cout << "Base Dexterity: " << GetBaseDexterity() << std::endl;
        std::cout << "Dexterity: " << GetDexterity() << std::endl;

        std::cout << "Base Constitution: " << GetBaseConstitution() << std::endl;
        std::cout << "Constitution: " << GetConstitution() << std::endl;

        std::cout << "Base Charisma: " << GetBaseCharisma() << std::endl;
        std::cout << "Charisma: " << GetCharisma() << std::endl;

        std::cout << "Base Arcana: " << GetBaseArcana() << std::endl;
        std::cout << "Arcana: " << GetArcana() << std::endl;
    }
}
