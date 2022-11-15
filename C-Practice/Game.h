#pragma once

#include "Utilities.h"

class Game
{
public:
	Game(){}

	void Run(bool is_running);
	bool Update(bool is_running);

private:
	bool isRunning { true };
};

