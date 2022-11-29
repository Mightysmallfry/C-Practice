#include "Inventory.h"


namespace Jurassic
{



    std::vector<size_t> Inventory::FindIndicesOf(Item& item)
    {
        std::vector<size_t> indexVector{};

        for (int i = 0; i < MAX_INVENTORY_SIZE; i++)
        {
            if (inventoryArray[i].GetInventorySlotId() == item.GetInventorySlotId()) // Will there be a problem with -1?
            {
                indexVector.push_back(i);
            }
        }

        return indexVector;
    }

}