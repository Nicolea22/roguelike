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
	void update();

private:

	void initRooms(vector<string>);

	int __rooms_amount;
	vector<Room> _rooms;
	Room _actualRoom;

};