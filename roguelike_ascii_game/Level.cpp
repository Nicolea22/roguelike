#include "Level.h"

Level::Level(){}

Level::~Level() {}

Level::Level(Player* player)
{
	_player = player;
	vector<string> rooms_data = LoadMapFromFile("levels/level1/1.txt");

	initRooms(rooms_data);

	_actual_room = _rooms[0].getRoom();
	_room_number = 0;
}


void Level::initRooms(vector<string> rooms_data) 
{
	vector<string> aux_room;
	_rooms_amount = rooms_data[0][1] - '0';

	for (int i = 1; i < rooms_data.size(); i++) 
	{
		string line = rooms_data[i];

		if (line[0] != '-') 
		{	
			aux_room.push_back(line);
			continue;
		}
		else
		{
			_rooms.push_back(aux_room);
			aux_room.clear();
		}// else	
	}// if
}// method


void Level::changeLevel(int i) 
{
	_actual_room = _rooms[i].getRoom();
}

void Level::update(Player* player) 
{
	if ( _actual_room[player->getY()][player->getX()] == '|' && _room_number == 0)
	{
		_room_number = 1;
		changeLevel(1);
		_player->setX(1);
		_player->setY(1);
	}
	
	if (_actual_room[player->getY()][player->getX()] == '|' && _room_number == 1)
	{
		_room_number = 0;
		changeLevel(0);
		_player->setX(1);
		_player->setY(1);
	}

	
}

