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
		bool IsSlotEmpty(size_t slot_index); // checks if the slot ID is the empy slot id
		size_t NextEmptySlot() const;


		//bool IsItemUnique(Item& item); // or alone in the inventory, are the there duplicates
		std::vector<size_t> FindIndicesOf(Item& item); 


		std::array<Item, MAX_INVENTORY_SIZE> inventoryArray; // A vector that holds all items 

	private:

		
	};
}