#pragma once
#include "Point.h"
#include <ostream>

namespace Jurassic
{
    class Rectangle
    {
    public:
        Rectangle() = default;
        Rectangle(unsigned width, unsigned short height);
        Rectangle(coord_t top, coord_t left, coord_t bottom, coord_t right);

        coord_t Top() const;
        coord_t Left() const;
        coord_t Bottom() const;
        coord_t Right() const;

        void Top(coord_t top);
        void Left(coord_t left);
        void Bottom(coord_t bottom);
        void Right(coord_t right);

        unsigned short Width() const;
        unsigned short Height() const;

        friend std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle);

    private:
        Point topLeft_{};
        Point bottomRight_{};
    };

    std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle);

    bool IsInside(const Rectangle& rectangle, const Point& point);
}
