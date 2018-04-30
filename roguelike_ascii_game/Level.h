#pragma once
#include "Room.h"
#include "Filemanager.h"
#include <vector>
#include <string>

using namespace std;

class Level
{
public:
			
	Level();
	~Level();
	
	void setCharAt(Position, Position, char);


private:

	void initRooms(vector<string>);

	int _num_rooms;
	vector<Room> _rooms;
	vector<string> _actualRoom;

};