#include "Canvas.h"
#include "Debug.h"

Canvas::Canvas() {}

Canvas::Canvas(char identifier, int levelsAmount)
{
	_player = new Player(4, 1, identifier);
	_levels_amount = levelsAmount;

	_levels.push_back(Level(_player));

	_act_level = _levels[0];
}

Canvas::~Canvas() {}

void Canvas::update()
{
	_player->update(_act_level.getActualRoom());
	_act_level.update(_player);
}