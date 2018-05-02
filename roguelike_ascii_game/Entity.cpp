#include "Entity.h"

Entity::Entity() 
{
	
}

Entity::Entity(int x, int y, char avatar)
{
	_avatar = avatar;
	_pos = Position(x, y);
}

Entity::~Entity(){}