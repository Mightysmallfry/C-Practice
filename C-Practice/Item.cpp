#include "Item.h"

int Item::num_of_items = 0;

Item::Item(const std::string& name, const int size, const float weight)
{
    item_name = name;
    item_size = size;
    item_weight = weight;
    num_of_items++;
}

std::string Item::GetName()
{
    return item_name;
}

int Item::GetSize() const
{
    return item_size;
}

float Item::GetWeight() const
{
    return item_weight;
}

int Item::GetNumOfItem()
{
    return num_of_items;
}

void Item::PrintItem()
{
    std::cout << "Name: " << GetName() << std::endl;
    std::cout << "Size: " << GetSize() << std::endl;
    std::cout << "Weight: " << GetWeight() << std::endl;
    std::cout << "NumOfItem: " << GetNumOfItem() << std::endl;
}
