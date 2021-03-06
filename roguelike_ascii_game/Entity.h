#ifndef ENTITY_H
#define ENTITY_H
#include "Position.h"
#include "Drawable.h"

class Entity: public Drawable
{
public:

	Entity();
	Entity(int, int, char);
	Entity(Position, char);

	~Entity();

	void draw();
	void update() {};

	void setX(int);
	void setY(int);

	int getX() { return _pos.getX(); };
	int getY() { return _pos.getY(); };

	int get_id() { return _id; };

	char getAvatar() { return _avatar; };

	Position* getPos() { return &_pos; };
	Position* getLastPos() { return &_last_pos; };

protected:

	Position _pos;
	Position _last_pos;

	char _avatar;

	int _life;
	int _damage;

	static int _id_tracking;
	int _id;
};
#endif
