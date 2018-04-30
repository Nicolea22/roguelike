#include "Position.h"

Position::Position(){};

Position::Position(int x, int y) 
{
	_x = x;
	_y = y;
}

void Position::setX(int x) { _x = x; }
void Position::setY(int y) { _y = y; }

void Position::setPosition(int x, int y) 
{
	_x = x;
	_y = y;
}

void Position::setPosition(Position lastPos) 
{
	_x = lastPos._x;
	_y = lastPos._y;
}