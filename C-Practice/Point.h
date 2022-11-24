#pragma once
#include <ostream>

namespace Jurassic
{
    using coord_t = unsigned short;

    class Point
    {
    public:
        Point() = default;
        Point(coord_t x, coord_t y);

        coord_t X() const;
        void X(coord_t x);

        coord_t Y() const;
        void Y(coord_t y);

        friend std::ostream& operator<<(std::ostream& os, const Point& point);

    private:
        coord_t x_{};
        coord_t y_{};
    };

    std::ostream& operator<<(std::ostream& os, const Point& point);
}
