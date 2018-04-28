#include <stdio.h>
#include <fstream>
#include <iostream>
#include "Game.h"
#include "Canvas.h"


int main()
{
	Game game = Game();
	game.completeAvatar();
	game.callCanvasConstructor();
	game.loop();

	int x;
	cin >> x;

	return 0;
}

