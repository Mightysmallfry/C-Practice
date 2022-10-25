//#include <iostream>
//#include <string>
//#include <vector>

#include "Item.h"
#include "Creature.h"


int main()
{
    Creature playerEntity("Player", 5, 3, 2, 4);


    Item itemEntity("Bucket", 2, 3);


    itemEntity.PrintItem();
}