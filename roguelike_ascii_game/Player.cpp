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

void Player::update()
{
	_lastPosition.setPosition(_position.getX(), _position.getY());
	input = _getch();
	switch (input)
	{
	case 'w':
		_position.setY(_position.getY() - 1);
		break;
	case 'a':
		_position.setX(_position.getX() - 1);
		break;
	case 's':
		_position.setY(_position.getY() + 1);
		break;
	case 'd':
		_position.setX(_position.getX() + 1);
		break;
	default:
		break;
	}
}