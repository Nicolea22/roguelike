#include "Room.h"

Room::Room() {}

Room::Room(vector<string> room)
{
	_room = room;
}

Room::~Room() {}

void Room::update()
{}

void Room::draw() 
{
	for (int y = 0; y < _room.size(); y++) 
	{
		for (int x = 0; x < _room[y].size(); x++)
		{
			Drawable::draw_obj(Position(x,y), _room[y][x]);
		}
	}
}

char Room::getCharAt(Position pos)
{
	return _room[pos.getY()][pos.getX()];
}

void Room::setRoom(vector<string> room)
{
	_room = room;
}
