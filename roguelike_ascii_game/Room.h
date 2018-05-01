#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <vector>
#include <string>
#include "Position.h"

using namespace std;

class Room
{
public:

	Room();
	Room(vector<string>);
	~Room();

	void setRoom(vector<string>);

	char getCharAt(Position);
	vector<string> getRoom() { return _room; }

private:

	vector <string> _room;

};
#endif