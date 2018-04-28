#pragma once
#include <vector>
#include <string>

using namespace std;

class Map
{
public:

	Map();
	~Map();
	
	void update();
	void draw();
	
	void setCharAt(int, int, char);

	vector<string> getMap() { return map; };
	char getCharAt(int, int);

private:

	vector <string> map;
};
 
