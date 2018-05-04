#pragma once
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include "Position.h"

class Drawable 
{
public:
	
	virtual void update() = 0;
	void draw_obj(Position, char obj = ' ');

private:

	COORD coord;
	HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);

};