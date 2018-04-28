#include "Map.h"
#include "FileManager.h"

Map::Map()
{
	map = LoadMapFromFile("test2.txt");	
	map[0][0] = 'h';

	cout << map[0][0] << endl;
}


Map::~Map(){}

void Map::update() 
{

}

void Map::draw()
{
	for (int y = 0; y < map.size(); y++)
	{
		for (int x = 0; x < map[y].size(); x++)
		{
			cout << map[y][x];
		}
		cout << endl;
	}
}

char Map::getCharAt(int x, int y) 
{
	return map[y][x];
}


void Map::setCharAt(int x, int y, char avatar) 
{
	map[y][x] = avatar;
}