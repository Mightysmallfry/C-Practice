#pragma once

#include "Utilities.h"

namespace Jurassic
{
    class Item
    {
    public:

        Item() { NumOfItems++; };

        Item(const std::string& name, const RarityTypes item_rarity) { NumOfItems++; };


        static int getNumOfItem();
        bool GetIsUnique();


        std::string getName();
        RarityTypes Rarity();
        void Rarity(RarityTypes new_rarity);
        size_t GetInventorySlotId();
        void SetInventorySlotId(size_t new_slot_id);


        
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
        const bool isUnique{ false }; // determines if only one can be in the inventory

        std::string itemName{"Bucket"};
        RarityTypes itemRarity{ RarityTypes::Common };
        size_t inventorySlotId { INVENTORY_EMPTY_SLOT_ID }; // 0-inventory size, slot number aka index number
        int itemId { 1 }; //unique id that represents the item




        int strengthModifier{ 0 };
        int dexterityModifier{ 0 };
        int constitutionModifier{ 0 };
        int charismaModifier{ 0 };
        int arcanaModifier{ 0 };



    };
    
}
