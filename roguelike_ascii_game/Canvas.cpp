#include "Canvas.h"

Canvas::Canvas() {}

Canvas::Canvas(char identifier)
{
	map = Map();

	player = Player(2, 1, identifier);
	map.setCharAt(player.getX(), player.getY(), player.getIdentifier());
}

Canvas::~Canvas() {}

void Canvas::draw()
{
	vector<string> auxMap = map.getMap();

	for (int y = 0; y < auxMap.size(); y++) 
	{
		for (int x = 0; x < auxMap[y].size(); x++) 
		{
			cout << auxMap[y][x];
		}
		cout << endl;
	}
}

void Canvas::update() 
{
	//map.setCharAt(player.getX(), player.getY(), player.getIdentifier());
}