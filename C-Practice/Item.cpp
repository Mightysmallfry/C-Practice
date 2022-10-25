#include "Item.h"

int Item::num_of_items = 0;

Item::Item(const std::string& name, const int size, const float weight)
{
    item_name = name;
    item_size = size;
    item_weight = weight;
    num_of_items++;
}

std::string Item::getName()
{
    return item_name;
}

int Item::getSize() const
{
    return item_size;
}

float Item::getWeight() const
{
    return item_weight;
}

int Item::getNumOfItem()
{
    return num_of_items;
}

void Item::toString()
{
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Size: " << getSize() << std::endl;
    std::cout << "Weight: " << getWeight() << std::endl;
    std::cout << "NumOfItem: " << getNumOfItem() << std::endl;
}
