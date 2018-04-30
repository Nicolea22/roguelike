#ifndef GAME_H
#define GAME_H
#include "Canvas.h"



class Game
{
const int LEVELS_AMOUNT = 1;

public:

	// constructors / deconstructors
	Game();
	~Game();

	// methods
	void loop();
	bool GetInGame() { return inGame; }

private:

	// methods
	void clearScreen();

	// attributes
	bool inGame;
	Canvas canvas;

	void update();
	void draw();
};

#endif
