#pragma once
#include <iostream>
#include "Player.h"
#include "Map.h"

class Canvas
{
public:

	Canvas();
	Canvas(char);
	~Canvas();

	void draw();
	void update();

private:
	Player player;
	Map map;
};