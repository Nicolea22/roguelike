#pragma once
#include "Position.h"
#include "Entity.h"

class Enemy:Entity
{
public:
	Enemy();

private:
	Position _position;
	int _life;
	int _damage;
};