#pragma once
#include "Player.h"
#include "Map.h"

class Game

{
public:

	Game();
	~Game();

	void loop();
	bool GetInGame() { return inGame; }

private:
	bool inGame;
	Player player;
	Map map;

	void update();
	void draw();


};
