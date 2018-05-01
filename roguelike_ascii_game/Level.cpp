#include "Level.h"

Level::Level(){}

Level::~Level() {}

Level::Level(Player player)
{
	_player = player;
	vector<string> rooms_data = LoadMapFromFile("levels/level1/1.txt");

	initRooms(rooms_data);
}


void Level::initRooms(vector<string> rooms_data) 
{
	// TODO: load all the level's rooms
	int room_index = 0;

	for (int row = 0; row < rooms_data.size(); i++) 
	{
	}

	/*
	//initialize the first level's room
	vector<string> room = _rooms[0].getRoom();
	_actual_room = room;
	*/
}


void Level::update() 
{
	int old_x = _player.getLastPosition().getX();
	int old_y = _player.getLastPosition().getY();

	int new_x = _player.getX();
	int new_y = _player.getY();

	_actual_room[old_y][old_x] = ' ';
	_actual_room[new_y][new_x] = _player.getIdentifier();
}

