#include "Inventory.h"


namespace Jurassic
{
    bool Inventory::AddItem(Item& item)
    {
        //TODO: Check for Unique items. Check logic
        bool canAdd = false;

        if (item.IsUnique())
        {
            for (auto& [key, value_item] : inventorySlots)
            {
                if (item.getName() == key)
                {
                    return canAdd;
                }
            }
        }


        if (inventorySlots.size() != MAX_INVENTORY_SIZE)
        {
            inventorySlots[item.getName()] = item;
            canAdd = true;
        }

        return canAdd;
    }

    void Inventory::RemoveItem(Item& item)
    {
        inventorySlots.erase(item.getName());
        updateSlots.erase(item.getName());
    }

    bool Inventory::IsInInventory(Item& item)
    {
        return (inventorySlots.find(item.getName()) != inventorySlots.end());
    }

    bool Inventory::IsValid()
    {
        for (auto& [key_name, item] : inventorySlots)
        {
            if (!item.IsApplied())
            {
                updateSlots[item.getName()] = item;
                isValid = false;
            }
        }
        return isValid;
    }

    void Inventory::IsValid(bool is_valid)
    {
        isValid = is_valid;
    }

    bool Inventory::GetIsValid()
    {
        return isValid;
    }

    void Inventory::ToString()
    {
        // C++ 14
        //for (auto& key_value : inventorySlots)
        //{
        //    const std::string& name = key_value.first;
        //    Item& item = key_value.second;
        //}
        // C++ 17
        std::cout << "= Inventory =" << std::endl;
        for (auto& [key_name, value_item] : inventorySlots)
        {
            std::cout << key_name << " - Is Applied : " << value_item.IsApplied() << std::endl;
            std::cout << " item rarity: " << value_item.Rarity() << std::endl;
            std::cout << " item strength: " << value_item.StrengthMod() << std::endl;
            std::cout << " item dexterity: " << value_item.DexterityMod() << std::endl;
            std::cout << " item constitution: " << value_item.ConstitutionMod() << std::endl;
        }
    }

    void Inventory::UpdateSlotPrint()
    {
        std::cout << "= UpdateSlots =" << std::endl;
        for (auto& [key_name, value_item] : updateSlots)
        {
            std::cout << key_name << std::endl;
            std::cout << " item rarity: " << value_item.Rarity() << std::endl;
            std::cout << " item strength: " << value_item.StrengthMod() << std::endl;
            std::cout << " item dexterity: " << value_item.DexterityMod() << std::endl;
            std::cout << " item constitution: " << value_item.ConstitutionMod() << std::endl;
        }
    }
}
