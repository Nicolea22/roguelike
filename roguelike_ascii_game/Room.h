#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <vector>
#include "Position.h"
#include "Drawable.h"

using namespace std;

class Room : public Drawable
{
public:

	Room();
	Room(vector<string>);
	~Room();

	void update();
	void draw();

	void setRoom(vector<string>);

	char getCharAt(Position);
	vector<string> getRoom() { return _room; }

private:

	vector <string> _room;

};
#endif