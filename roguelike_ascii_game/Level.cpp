#include "Level.h"
#include "Debug.h"

Level::Level(){}

Level::~Level() {}

Level::Level(Player player)
{
	_player = player;
	vector<string> rooms_data = LoadMapFromFile("levels/level1/1.txt");

	initRooms(rooms_data);

	_actual_room = _rooms[0].getRoom();
}


void Level::initRooms(vector<string> rooms_data) 
{
	vector<string> aux_room;
	_rooms_amount = rooms_data[0][1] - '0';

	for (int i = 1; i < rooms_data.size(); i++) 
	{
		string line = rooms_data[i];

		if (line[0] == '-') 
		{	
			_rooms.push_back(aux_room);
			aux_room.clear();
			continue;
		}
		aux_room.push_back(line);		
	}
}


void Level::update() 
{
	_actual_room.update();

	int old_x = _player.getLastPosition().getX();
	int old_y = _player.getLastPosition().getY();

	int new_x = _player.getX();
	int new_y = _player.getY();

	//_actual_room[old_y][old_x] = ' ';
	_actual_room[new_y][new_x] = _player.getIdentifier();
}

