#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <vector>
#include <string>
#include "Player.h"

using namespace std;

class Room
{
public:

	Room();
	Room(Player, vector<string>);
	~Room();

	void update();

	vector<string> getRoom() { return _room; }
	char getCharAt(Position);

private:

	vector <string> _room;
	Player _player;
};
#endif