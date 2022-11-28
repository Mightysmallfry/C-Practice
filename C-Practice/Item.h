#pragma once

#include "Utilities.h"

namespace Jurassic
{
    class Item
    {
    public:
        Item() { NumOfItems++; };
        Item(const std::string& name, const RarityTypes item_rarity) { NumOfItems++; };

        std::string getName();
        RarityTypes Rarity();
        void Rarity(RarityTypes new_rarity);
        
        int StrengthMod();
        void StrengthMod(int new_mod);
        int DexterityMod();
        void DexterityMod(int new_mod);
        int ConstitutionMod();
        void ConstitutionMod(int new_mod);
        int CharismaMod();
        void CharismaMod(int new_mod);
        int ArcanaMod();
        void ArcanaMod(int new_mod);



        static int getNumOfItem();
        void toString();

    private:
        std::string itemName{"Bucket"};
        RarityTypes itemRarity{ RarityTypes::Common };
        static int NumOfItems;

        int strengthModifier{ 0 };
        int dexterityModifier{ 0 };
        int constitutionModifier{ 0 };
        int charismaModifier{ 0 };
        int arcanaModifier{ 0 };



    };
    
}
