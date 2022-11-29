#include "Item.h"

namespace Jurassic
{
    int Item::NumOfItems = 0;


    std::string Item::getName()
    {
        return itemName;
    }

    RarityTypes Item::Rarity()
    {
        return itemRarity;
    }

    size_t Item::GetInventorySlotId()
    {
        return inventorySlotId;
    }

    void Item::SetInventorySlotId(size_t new_slot_id)
    {
        inventorySlotId = new_slot_id;
    }


    void Item::Rarity(RarityTypes new_rarity)
    {
        itemRarity = new_rarity;
    }

    bool Item::GetIsUnique()
    {
        return isUnique;
    }

    int Item::StrengthMod()
    {
        return strengthModifier;
    }

    void Item::StrengthMod(int new_mod)
    {
        strengthModifier = new_mod;
    }

    int Item::DexterityMod()
    {
        return dexterityModifier;
    }

    void Item::DexterityMod(int new_mod)
    {
        dexterityModifier = new_mod;
    }

    int Item::ConstitutionMod()
    {
        return constitutionModifier;
    }

    void Item::ConstitutionMod(int new_mod)
    {
        constitutionModifier = new_mod;
    }

    int Item::CharismaMod()
    {
        return charismaModifier;
    }

    void Item::CharismaMod(int new_mod)
    {
        charismaModifier = new_mod;
    }

    int Item::ArcanaMod()
    {
        return arcanaModifier;
    }

    void Item::ArcanaMod(int new_mod)
    {
        arcanaModifier = new_mod;
    }

    int Item::getNumOfItem()
    {
        return NumOfItems;
    }

    void Item::toString()
    {
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "NumOfItem: " << getNumOfItem() << std::endl;
    }
    
}
