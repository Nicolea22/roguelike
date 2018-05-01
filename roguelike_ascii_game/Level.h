#pragma once
#include "Room.h"
#include "Filemanager.h"
#include "Player.h"
#include <vector>
#include <string>

using namespace std;

class Level
{
public:
	
	Level();
	Level(Player player);
	~Level();
	
	void update();
	void changeLevel(int);
	
	vector<string> getActualRoom() { return _actual_room; };

private:

	void initRooms(vector<string>);

	Player _player;

	int _rooms_amount;
	vector<Room> _rooms;
	vector<string> _actual_room;

};