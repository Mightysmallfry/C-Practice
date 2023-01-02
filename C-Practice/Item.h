#pragma once

#include "Utilities.h"




namespace Jurassic
{
    class Item
    {
    public:
        Item() { NumOfItems++; };


        Item& operator=(const Item& other);



        Item(const std::string& name, const RarityTypes item_rarity)
	        :   itemName(name), itemRarity(item_rarity) { NumOfItems++; }


        Item(const std::string& name, const RarityTypes item_rarity, int strength_mod, 
            int dexterity_mod, int constitution_mod, int charisma_mod, int arcana_mod)
            : itemName(name), itemRarity(item_rarity), strengthModifier(strength_mod),
                dexterityModifier(dexterity_mod), constitutionModifier(constitution_mod),
                charismaModifier(charisma_mod), arcanaModifier(arcana_mod)
        { NumOfItems++; }


        static int getNumOfItem();
        bool IsUnique();
        bool IsApplied();
        void IsApplied(bool is_applied);

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



        void toString();

    private:
        static int NumOfItems;
        bool isUnique{ false }; // determines if only one can be in the inventory
        bool isApplied{ false };

        std::string itemName{"Bucket"};
        RarityTypes itemRarity{ RarityTypes::Common };

        int strengthModifier{ 0 };
        int dexterityModifier{ 0 };
        int constitutionModifier{ 0 };
        int charismaModifier{ 0 };
        int arcanaModifier{ 0 };
    };
    
}
