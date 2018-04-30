#include "Level.h"

Level::Level()
{
	vector<string> rooms_data = LoadMapFromFile("levels/level1/1.txt");

	initRooms(rooms_data);
}


void Level::initRooms(vector<string> rooms_data) 
{
	vector<string>::iterator it;
	for (it = rooms_data.begin(); it != rooms_data.end(); it++) 
	{
		
	}

}

Level::~Level(){}






//vector<string> Level::getActualRoom() { return _actualRoom; };

void Level::setCharAt(Position, Position, char)
{
	
}
