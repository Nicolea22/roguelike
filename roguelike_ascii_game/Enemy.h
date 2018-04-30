#pragma once
#include "Position.h"

class Enemy
{
public:
	Enemy();

private:
	Position _position;
	int _life;
	int _damage;
};