#ifndef CANVAS_H
#define CANVAS_H
#include <iostream>
#include "Level.h"
#include "Player.h"

using namespace std;

class Canvas
{
public:

	Canvas();
	Canvas(char, int);
	~Canvas();

	void draw();
	void update();

private:
	Player _player;
	int _levels_amount;
	vector <Level> _levels;
	Level _act_level;
};

#endif