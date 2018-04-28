#include "Player.h"
#include <conio.h>

Player::Player() {}

Player::Player(int x, int y, char identifier)
{
	this->identifier = identifier;
	this->x = x;
	this->y = y;
}

Player::~Player(){}

void Player::update()
{
	input = _getch();
}

void Player::draw()
{

}
