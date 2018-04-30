#include <stdio.h>
#include <iostream>
#include <vector>
#include "Game.h"

using namespace std;

int main()
{
	Game game = Game();
	game.loop();

	int x;
	cin >> x;

	return 0;
}

