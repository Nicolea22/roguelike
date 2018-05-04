#pragma once
#include <vector>
#include "Entity.h"
#include "Drawable.h"

using namespace std;

class ObjectHandler : public Drawable
{

private:

	static ObjectHandler* instance;

	ObjectHandler();
	~ObjectHandler();

	vector<Entity> objects;

public:

	static ObjectHandler* get_instance();

	void draw();
	void update();
	void add(Entity);
	void delete_from_list(Entity);



};
