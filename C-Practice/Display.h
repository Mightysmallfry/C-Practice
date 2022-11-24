#pragma once
#include "Utilities.h"
#include "Dinosaur.h"
#include "AllDinosaurs.h"
#include "HitPoints.h"
#include "StatBlock.h"
#include "Map.h"

namespace Jurassic
{
    class Display
    {
    protected:
        static constexpr char ESC[2]{"\x1B"};
        static constexpr char CSI[3]{"\x1B["};
        static constexpr unsigned short SCREEN_WIDTH{80};
        static constexpr unsigned short SCREEN_HEIGHT{25};
        static constexpr unsigned short SCREEN_BG_COLOR{44};
        static constexpr unsigned short SCREEN_FG_COLOR{97};
        static constexpr unsigned short MAP_VIEWPORT_WIDTH{10};
        static constexpr unsigned short MAP_VIEWPORT_HEIGHT{10};
    public:
        Display() {};

        //Initializers
        void CreateDisplay(int screen_width, int screen_height);

        void RenderMap(const Map& map, const Point& location);

        //Gameloop||Runtime
        void Update();

        void DrawTextBox(); //For drawing the story boxes of people's interacted speech
        void DrawFrame();
        //Display Errors
        void DisplayError(); //Will take in error code

        //Draw Game HUD

        void DrawRow(int width);
        void DrawColumn(int height);

        //GetGameMaximumHeight is console height
        //GetGameMaximumWidth is console width

        void DrawAsSelected(); //Draws the object but with brackets around them ie. Unselected [Selected] Unselected

        //Draw Game Elements
        void DisplayDinosaur(); //Displays the dinosaur name and calls other functions
        void DisplayDinosaurStats(); //Displays the dinosaur Stats
        void DisplayDinosaurAttacks(); //Displays the dinosaur Attacks 

        void ClearScreen();
        void GotoXY(unsigned short x, unsigned short y);
        void SGR(unsigned short attr);
        void SGR(unsigned short attr, unsigned short attr2);
        void SGR(unsigned short attr, unsigned short attr2, unsigned short attr3);
        void SGR(unsigned short attr, unsigned short attr2, unsigned short attr3, unsigned short attr4);
        void LineDrawMode(bool enable);

        void DrawRect(const Rectangle& rectangle);

        void Invalidate(bool state = true);
        bool NeedsRefresh();
    private:
        bool needsRefresh_{false};
        Rectangle screenRect_{SCREEN_WIDTH, SCREEN_HEIGHT};
        Rectangle mapViewportRect{MAP_VIEWPORT_WIDTH , MAP_VIEWPORT_HEIGHT};
    };
}
