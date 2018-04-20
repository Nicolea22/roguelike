#pragma once
#include <vector>

class Map
{
public:

	Map();
	~Map();

	void update();
	void draw();

private:

	vector <string> map;

};
 
