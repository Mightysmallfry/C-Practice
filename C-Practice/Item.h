#pragma once

#include <string>
#include <iostream>

class Item
{
public:
    Item(const std::string& name, const int size, const float weight);


    // GETTERS
    std::string GetName();
    int GetSize() const;
    float GetWeight() const;

    static int GetNumOfItem();
    void PrintItem();

private:
    std::string item_name;
    int item_size;
    float item_weight;

    static int num_of_items;
};
