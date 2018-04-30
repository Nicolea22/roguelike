#ifndef PLAYER_H
#define PLAYER_H
#include "Position.h"

class Player
{

public:

	Player();
	Player(int, int, char, int);
	Player(Position, char, int);

	~Player();

	void update();

	int getX() { return _position.getX(); }
	int getY() { return _position.getY(); }
	int getScore() { return _score; }

	Position getPosition() { return _position; }
	Position getLastPosition() { return _lastPosition; }

	int getLife() { return _life; }
	char getIdentifier() { return _identifier; }

private:
	
	char _identifier;
	int _life;
	int _score;

	Position _position;
	Position _lastPosition;

	char input;
};
#endif