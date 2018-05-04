#ifndef CANVAS_H
#define CANVAS_H
#include <iostream>
#include <Windows.h>
#include "ObjectHandler.h"
#include "Level.h"
#include "Player.h"

using namespace std;

class Canvas
{
public:

	Canvas();
	Canvas(char, int);
	~Canvas();

	
	void draw_objects();
	void draw_map();
	void update();

private:

	Player* _player;
	ObjectHandler* obj_handler;

	HANDLE handle_out;

	int _levels_amount;
	vector <Level> _levels;
	Level _act_level;

	
};
#endif
