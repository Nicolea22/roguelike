#include "Entity.h"

Entity::Entity(){}

Entity::Entity(int x, int y, char avatar): _avatar(avatar)
{
	_pos = Position(x, y);
}

Entity::Entity(Position pos, char avatar): _avatar(avatar), _pos(pos)
{}

Entity::~Entity(){}

void Entity::setX(int x) { _pos.setX(x); }
void Entity::setY(int y){ _pos.setY(y); }
