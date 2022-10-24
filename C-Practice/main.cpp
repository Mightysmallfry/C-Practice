#include <iostream>
#include <string>
#include <vector>

#include "Item.h"
#include "Creature.h"


int main()
{

	Creature playerEntity("Player", 5, 3, 2, 4);


	Item daggerEntity("Dagger", 2, 3);



	Item playerInventoryArray[3]; //size is get player.inventorySize() Which is determined by strength

	std::cout << playerInventoryArray;

	//daggerEntity.printItem();
}