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
{}

