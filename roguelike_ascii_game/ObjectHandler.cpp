#include "ObjectHandler.h"


ObjectHandler* ObjectHandler::get_instance() 
{
	if (instance == 0)
		instance = new ObjectHandler();
	
	return instance;
}

ObjectHandler::ObjectHandler()
{}

ObjectHandler::~ObjectHandler()
{}


void ObjectHandler::draw() 
{
	for (int i = 0; i < objects.size(); i++) 
	{
		objects.at(i).update();
	}
}

void ObjectHandler::update()
{}

void ObjectHandler::add(Entity obj) 
{
	objects.push_back(obj);
}

void ObjectHandler::delete_from_list(Entity obj)
{
	for (int i = 0; i < objects.size(); i++) 
	{
		if (objects.at(i).get_id() == obj.get_id());
	}
}