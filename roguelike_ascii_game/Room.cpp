#include "Room.h"

Room::Room() {}


Room::Room(vector<string> room)
{
	_room = room;
}

Room::~Room() {}

char Room::getCharAt(Position pos)
{
	return _room[pos.getY()][pos.getX()];
}

void Room::setRoom(vector<string> room)
{
	_room = room;
}
