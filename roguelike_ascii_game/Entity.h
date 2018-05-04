#ifndef ENTITY_H
#define ENTITY_H
#include "Position.h"

class Entity
{
public:

	Entity();
	Entity(int, int, char);
	Entity(Position, char);

	~Entity();

	void setX(int);
	void setY(int);

	int getX() { return _pos.getX(); };
	int getY() { return _pos.getY(); };

	char getAvatar() { return _avatar; };

	Position* getPos() { return &_pos; };
	Position* getLastPos() { return &_last_pos; };

protected:

	Position _pos;
	Position _last_pos;

	char _avatar;

	int _life;
	int _damage;

};
#endif
