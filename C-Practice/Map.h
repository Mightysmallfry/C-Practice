#pragma once
#include <Windows.h>

#include "Point.h"
#include "Rectangle.h"

namespace Jurassic
{
    class Map
    {
    protected:
        static constexpr unsigned short MAP_WIDTH{ 100 };
        static constexpr unsigned short MAP_HEIGHT{ 100 };

    public:
        Map();

        void Init();

        CHAR_INFO At(unsigned short x, unsigned short y) const;
        void At(unsigned short x, unsigned short y, const CHAR_INFO& info);

        Rectangle GetRectangle() const;

    private:
        Rectangle rectangle_{MAP_WIDTH, MAP_HEIGHT};
        CHAR_INFO map[MAP_WIDTH][MAP_HEIGHT];
    };
}
