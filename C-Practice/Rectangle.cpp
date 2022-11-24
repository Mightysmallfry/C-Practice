#include "Rectangle.h"

namespace Jurassic
{
    Rectangle::Rectangle(unsigned width, unsigned short height)
    {
        //topLeft_.X(0);
        //topLeft_.Y(0);
        bottomRight_.X(width);
        bottomRight_.Y(height);
    }

    Rectangle::Rectangle(coord_t top, coord_t left, coord_t bottom, coord_t right)
        : topLeft_(top, left), bottomRight_(bottom, right)
    {}

    inline coord_t Rectangle::Top() const
    {
        return topLeft_.Y();
    }

    inline coord_t Rectangle::Left() const
    {
        return topLeft_.X();
    }

    inline coord_t Rectangle::Bottom() const
    {
        return bottomRight_.Y();
    }

    inline coord_t Rectangle::Right() const
    {
        return bottomRight_.X();
    }

    void Rectangle::Top(coord_t top)
    {
        topLeft_.Y(top);
    }

    void Rectangle::Left(coord_t left)
    {
        topLeft_.X(left);
    }

    void Rectangle::Bottom(coord_t bottom)
    {
        bottomRight_.Y(bottom);
    }

    void Rectangle::Right(coord_t right)
    {
        bottomRight_.X(right);
    }

    unsigned short Rectangle::Width() const
    {
        return (bottomRight_.X() - topLeft_.X());
    }

    unsigned short Rectangle::Height() const
    {
        return (bottomRight_.Y() - topLeft_.Y());
    }

    std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle)
    {
        os << "(" << rectangle.topLeft_ << "," << rectangle.bottomRight_ << ")";
        return os;
    }

    bool IsInside(const Rectangle& rectangle, const Point& point)
    {
        return ((rectangle.Left() <= point.X()) && (point.X() < rectangle.Right()) && (rectangle.Top() <= point.Y()) && (point.Y() < rectangle.Bottom()));
    }
}
