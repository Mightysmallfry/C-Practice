#include "Item.h"





std::string Item::getName()
{
	return item_name;
}

int Item::getSize()
{
	return item_size;
}

float Item::getWeight()
{
	return item_weight;
}

int Item::getNumOfItem()
{
	return num_of_items;
}

void Item::printItem()
{
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Size: " << getSize() << std::endl;
	std::cout << "Weight: " << getWeight() << std::endl;
	std::cout << "NumOfItem: " << getNumOfItem() << std::endl;
}
