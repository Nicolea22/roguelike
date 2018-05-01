#include "Level.h"

Level::Level()
{
	vector<string> rooms_data = LoadMapFromFile("levels/level1/1.txt");

	initRooms(rooms_data);
}


void Level::initRooms(vector<string> rooms_data) 
{
	int room_index = 0;
	for (int i = 0; i < rooms_data.size(); i++) 
	{
		string aux = rooms_data[i];
		if (aux[0] == '/') 
		{
			__rooms_amount = aux[1];
			continue;
		}
		if (aux[0] == ' ') 
		{
			room_index++;
			continue;
		}

		_rooms[]
	}
}

Level::~Level(){}



void Level::update() 
{
	_actualRoom.update();
}


//vector<string> Level::getActualRoom() { return _actualRoom; };

void Level::setCharAt(Position, Position, char)
{
	
}
