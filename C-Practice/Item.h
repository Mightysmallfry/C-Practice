#pragma once

#include <string>
#include <iostream>

class Item
{
public:

	Item(std::string name, int size, float weight){
		item_name = name;
		item_size = size;
		item_weight = weight;
		num_of_items++;
	}


	// GETTERS
	std::string getName();
	int getSize();
	float getWeight();

	static int getNumOfItem();
	void printItem();

private:

	std::string item_name;
	int item_size;
	float item_weight;

	static int num_of_items;

};
