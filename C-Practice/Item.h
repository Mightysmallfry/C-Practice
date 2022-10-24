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
	}


	// GETTERS
	std::string getName();
	int getSize();
	float getWeight();


	void printItem();

private:

	std::string item_name;
	int item_size;
	float item_weight;


};
