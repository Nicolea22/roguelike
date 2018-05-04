#pragma once
#include <vector>
#include "Entity.h"
#include "Drawable.h"

using namespace std;

class ObjectHandler : public Drawable
{
public:

	ObjectHandler();
	~ObjectHandler();

	void draw();
	void update();
	void add(Entity);
	void delete_from_list(Entity);

private:

	vector<Entity> objects;

};
