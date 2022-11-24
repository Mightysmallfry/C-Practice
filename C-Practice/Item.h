#pragma once

#include <iostream>
#include <string>

namespace Jurassic
{
    class Item
    {
    public:
        Item() {};
        Item(const std::string& name, const int size, const float weight);

        // GETTERS
        std::string getName();
        int getSize() const;
        float getWeight() const;

        static int getNumOfItem();
        void toString();

    private:
        std::string item_name{"Bucket"};
        int item_size{2};
        float item_weight{3};

        static int num_of_items;
    };
    
}
