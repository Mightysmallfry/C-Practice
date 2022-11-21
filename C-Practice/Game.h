#pragma once

#include "Utilities.h"
#include "Triceratops.h"

class Game
{
public:
	int Run();

protected:
	void Setup();
	void Input();
	void Update();
	void Render();

private:
	Triceratops Tucker;

private:
	bool quit{ false };
};

