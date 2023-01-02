#pragma once

#include "Utilities.h"

#include "Item.h"


namespace Jurassic
{
    class Inventory
    {
    public:
        Inventory() {}

        bool AddItem(Item& item); // must check if item is unique before adding
        void RemoveItem(Item& item); // checks if it is in, and if it is then removes index value
        bool IsInInventory(Item& item); // spins through inventory checking if the item is already in the inventory
        bool IsValid();
        void IsValid(bool is_valid);
        bool GetIsValid();

        void ToString();

        void UpdateSlotPrint();

        //bool IsItemUnique(Item& item); // or alone in the inventory, are the there duplicates

        // keys are item.getName() , values are item&

        std::unordered_map<std::string, Item> inventorySlots;
        std::unordered_map<std::string, Item> updateSlots;
    private:
        bool isValid{false};
    };
}
