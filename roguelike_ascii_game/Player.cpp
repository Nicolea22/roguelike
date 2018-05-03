#include "Player.h"
#include <iostream>
#include <conio.h>

Player::Player(int x, int y, char identifier) : Entity(x, y, identifier)
{
	_life = 10;
	_score = 0;
}

Player::Player(Position position, char identifier) : Entity(position, identifier)
{
	_life = 10;
	_score = 0;
}

Player::~Player(){}


void Player::update(vector<string> room)
{
	_input = _getch();

	switch (_input)
	{
	case 'w':
		if(room[_pos.getY() - 1][_pos.getX()] != '#')
			_pos.setY(_pos.getY() - 1);
		break;
	case 'a':
		if (room[_pos.getY()][_pos.getX() - 1] != '#')
			_pos.setX(_pos.getX() - 1);
		break;
	case 's':
		if (room[_pos.getY() + 1][_pos.getX()] != '#')
			_pos.setY(_pos.getY() + 1);
		break;
	case 'd':
		if (room[_pos.getY()][_pos.getX() + 1] != '#')
			_pos.setX(_pos.getX() + 1);
		break;
	default:
		break;
	}

}

