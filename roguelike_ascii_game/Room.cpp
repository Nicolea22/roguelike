#include "Room.h"

Room::Room() {}


Room::Room(Player player, vector<string> room)
{
}

Room::~Room() {}

char Room::getCharAt(Position pos)
{
	return _room[pos.getY()][pos.getX()];
}


/*
* Set the new player's position
* Set the last position as space character to erase the avatar from 
* previous positions. The first line doesnt allow the "snake effect"
*/
void Room::setCharAt()
{
	_room[lastPosition.getY()][lastPosition.getX()] = ' ';
	_room[pos.getY()][pos.getX()] = avatar;
}