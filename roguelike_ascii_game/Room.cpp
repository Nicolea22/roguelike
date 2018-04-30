#include "Room.h"
#include "Player.h"

Room::Room() {}


Room::Room(Player player)
{/*
	_room = LoadMapFromFile("levels/level1/1.txt");

	for (int y = 0; y < _room.size(); y++)
	{
		for (int x = 0; x < _room[y].size(); x++)
		{
			_room[player.getY()][player.getX()] = player.getIdentifier();
		}
	}
*/
}


Room::~Room() {}

void Room::draw()
{/*
	for (int y = 0; y < room.size(); y++)
	{
		for (int x = 0; x < room[y].size(); x++)
		{
			cout << room[y][x];
		}
		cout << endl;
	}
*/

}

char Room::getCharAt(Position pos)
{
	//return room[pos.getY()][pos.getX()];
}


void Room::setCharAt(Position pos, Position lastPosition, char avatar)
{
/*
	room[lastPosition.getY()][lastPosition.getX()] = ' ';
	room[pos.getY()][pos.getX()] = avatar;
*/
}