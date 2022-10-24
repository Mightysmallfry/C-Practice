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

void Item::printItem()
{
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Size: " << getSize() << std::endl;
	std::cout << "Weight: " << getWeight() << std::endl;
}
