#include "Point.h"

namespace Jurassic
{
    Point::Point(const coord_t x, const coord_t y)
        : x_(x), y_(y)
    { }

    coord_t Point::X() const
    {
        return x_;
    }

    void Point::X(const coord_t x)
    {
        x_ = x;
    }

    coord_t Point::Y() const
    {
        return y_;
    }

    void Point::Y(const coord_t y)
    {
        y_ = y;
    }

    //--- Helper function
    std::ostream& operator<<(std::ostream& os, const Point& point)
    {
        os << "(" << point.x_ << "," << point.y_ << ")";
        return os;
    }
}
