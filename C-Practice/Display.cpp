#include "Display.h"

namespace Jurassic
{
    void Display::ClearScreen()
    {
        GotoXY(1, 1);
        std::cout << CSI << "2J";
        Invalidate();
    }

    void Display::RenderMap(const Map& map, const Point& location)
    {
        std::cout << "Location: " << location << std::endl;
        //std::cout << "Map: " << map.GetRectangle() << std::endl;
        Invalidate();

        // calc viewport
        //std::cout << "Location is " << (IsInside(map.GetRectangle(), location) ? "" : "NOT") << " on the map." << std::endl;
    }

    void Display::DrawFrame()
    {
        // goto xy
        // draw horizontal lines
        // draw vertical lines
        // draw corners
    }

    void Display::GotoXY(const unsigned short x, const unsigned short y)
    {
        std::cout << CSI << y << ";" << x << "H";
        Invalidate();
    }

    void Display::SGR(unsigned short attr)
    {
        std::cout << CSI << attr << "m";
        Invalidate();
    }

    void Display::SGR(unsigned short attr, unsigned short attr2)
    {
        std::cout << CSI << attr << ";" << attr2 << "m";
        Invalidate();
    }

    void Display::SGR(unsigned short attr, unsigned short attr2, unsigned short attr3)
    {
        std::cout << CSI << attr << ";" << attr2 << ";" << attr3 << "m";
        Invalidate();
    }

    void Display::SGR(unsigned short attr, unsigned short attr2, unsigned short attr3, unsigned short attr4)
    {
        std::cout << CSI << attr << ";" << attr2 << ";" << attr3 << ";" << attr4 << "m";
        Invalidate();
    }

    void Display::LineDrawMode(bool enable)
    {
        if (enable)
        {
            std::cout << ESC << "(0"; // Enter DEC Line Drawing Mode
        } else
        {
            std::cout << ESC << "(B"; // Enable ASCII Mode (default)
        }
        Invalidate();
    }

    void Display::DrawRect(const Rectangle& rectangle)
    {
        LineDrawMode(true);
        SGR(SCREEN_FG_COLOR, SCREEN_BG_COLOR); // Make the border bright yellow on bright blue

        // go to TopLeft corner
        GotoXY(rectangle.Left(), rectangle.Top());
        std::cout << "l"; // draw TopLeft corner

        for (unsigned short x = rectangle.Left()+1; x < rectangle.Right(); ++x)
            printf("q"); // draw horizontal line

        GotoXY(rectangle.Right(), rectangle.Top());
        std::cout << "k"; // draw top right corner

        // draw vertical lines
        unsigned short x1 = rectangle.Left();
        unsigned short x2 = rectangle.Right();
        for (unsigned short y = rectangle.Top()+1; y < rectangle.Bottom(); y++)
        {
            GotoXY(x1, y);
            std::cout << "x";
            GotoXY(x2, y);
            std::cout << "x";
        }

        GotoXY(rectangle.Left(), rectangle.Bottom());
        std::cout << "m"; // draw bottom left corner

        for (unsigned short x = rectangle.Left()+1; x < rectangle.Right(); x++)
            printf("q"); // draw horizontal line

        GotoXY(rectangle.Right(), rectangle.Bottom());
        std::cout << "j"; // draw bottom right corner

        SGR(0); // Back to default
        LineDrawMode(false);
    }

    void Display::Invalidate(bool state)
    {
        if (!state)
            std::cout.flush();

        needsRefresh_ = state;
    }

    bool Display::NeedsRefresh()
    {
        return needsRefresh_;
    }
}
