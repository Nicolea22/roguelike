#ifndef ENTITY_H
#define ENTITY_H
#include "Position.h"

class Entity
{
public:

	Entity();
	Entity(int, int, char);
	~Entity();

	int getX() { return _pos.getX(); };
	int getY() { return _pos.getY(); };

	int getLife() { return _life; };
	int getDamage() { return _damage; };

	Position* getPos() { return &_pos; };
	Position* getLastPos() { return &_last_pos; };

private:

	Position _pos;
	Position _last_pos;
	char _avatar;

	int _life;
	int _damage;

};
#endif
