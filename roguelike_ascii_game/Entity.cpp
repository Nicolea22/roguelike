#include "Entity.h"

int Entity::_id_tracking = 0;


Entity::Entity(){}

Entity::Entity(int x, int y, char avatar): _avatar(avatar)
{
	_id = _id_tracking;
	_id_tracking++;
	_pos = Position(x, y);
}

Entity::Entity(Position pos, char avatar): _avatar(avatar), _pos(pos)
{}

Entity::~Entity(){}

void Entity::setX(int x) { _pos.setX(x); }
void Entity::setY(int y){ _pos.setY(y); }
