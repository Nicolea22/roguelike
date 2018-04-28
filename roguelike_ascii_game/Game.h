#pragma once
#include "Canvas.h"

class Game

{
public:

	// constructors / deconstructors
	Game();
	~Game();

	// methods
	void loop();
	bool GetInGame() { return inGame; }

	void completeAvatar();
	void callCanvasConstructor();

private:

	// methods
	void clearScreen();

	// attributes
	bool inGame;
	Canvas canvas;

	char identifier;

	void update();
	void draw();
};
