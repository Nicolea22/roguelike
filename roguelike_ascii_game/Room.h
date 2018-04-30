#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include "Player.h"
#include <vector>
#include <string>

using namespace std;

class Room
{
public:

	Room();
	Room(Player);
	~Room();

	void draw();

	void setCharAt(Position, Position, char);

	//vector<string> getRoom() { return room; }
	char getCharAt(Position);

private:

	vector <string> _room;
};
#endif