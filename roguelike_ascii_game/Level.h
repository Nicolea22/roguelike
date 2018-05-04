#pragma once
#include "Room.h"
#include "Player.h"
#include "Drawable.h"


using namespace std;

class Level
{
public:
	
	Level();
	Level(Player* player);
	~Level();
	
	void update(Player*);
	void draw();

	void changeLevel(int);
	
	Room getActualRoom() { return _actual_room; };

private:

	void initRooms(vector<string>);

	Player* _player;
	int _room_number;
	int _rooms_amount;
	vector<Room> _rooms;
	Room _actual_room;

};