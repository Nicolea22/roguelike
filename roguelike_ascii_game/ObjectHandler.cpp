#include "ObjectHandler.h"
#include "Player.h"

ObjectHandler::ObjectHandler()
{
	
}

ObjectHandler::~ObjectHandler(){}

void ObjectHandler::draw() 
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects.at(i).draw();
	}
}

void ObjectHandler::update()
{
	
	for (int i = 0; i < objects.size(); i++)
	{
		objects.at(i).update();
	}

}

void ObjectHandler::add(Entity obj) 
{
	objects.push_back(obj);
}

void ObjectHandler::delete_from_list(Entity obj)
{
	for (int i = 0; i < objects.size(); i++) 
	{	}
}