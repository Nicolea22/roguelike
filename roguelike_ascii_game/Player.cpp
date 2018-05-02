#include "Player.h"
#include <conio.h>

Player::Player() {}

Player::Player(int x, int y, char identifier, int life)
{
	_identifier = identifier;	
	_position = Position(x, y);
	_life = life;
	_score = 0;
}

Player::Player(Position position, char identifier, int life)
{
	_identifier = identifier;
	_position = position;
	_life = life;
	_score = 0;
}



Player::~Player(){}

void Player::update(vector<string> room)
{
	_lastPosition.setPosition(_position.getX(), _position.getY());
	input = _getch();
	switch (input)
	{
	case 'w':
		if(room[_position.getY() - 1][_position.getX()] != '#')
			_position.setY(_position.getY() - 1);
		break;
	case 'a':
		if (room[_position.getY()][_position.getX() - 1] != '#')
			_position.setX(_position.getX() - 1);
		break;
	case 's':
		if (room[_position.getY() + 1][_position.getX()] != '#')
			_position.setY(_position.getY() + 1);
		break;
	case 'd':
		if (room[_position.getY()][_position.getX() + 1] != '#')
			_position.setX(_position.getX() + 1);
		break;
	default:
		break;
	}
}