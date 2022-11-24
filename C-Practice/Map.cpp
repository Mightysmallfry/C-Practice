#include "Map.h"

#include <cassert>

namespace Jurassic
{
    Map::Map() = default;

    void Map::Init()
    {
        constexpr CHAR_INFO info{ 0x0020, 0x00 };

        for (unsigned short x = 0; x < MAP_WIDTH; ++x)
        {
            for (unsigned short y = 0; y < MAP_HEIGHT; ++y)
            {
                At(x, y, info);
            }
        }
    }

    CHAR_INFO Map::At(const unsigned short x, const unsigned short y) const
    {
        assert(x < MAP_WIDTH);
        assert(y < MAP_HEIGHT);
        return map[x][y];
    }

    void Map::At(const unsigned short x, const unsigned short y, const CHAR_INFO& info)
    {
        assert(x < MAP_WIDTH);
        assert(y < MAP_HEIGHT);
        map[x][y] = info;
    }

    Rectangle Map::GetRectangle() const
    {
        return rectangle_;
    }

}
