#include "Canvas.h"

Canvas::Canvas() {}

Canvas::Canvas(char identifier, int levelsAmount)
{
	obj_handler = new ObjectHandler();
	
	_player = new Player(4, 1, identifier);

	_levels_amount = levelsAmount;

	_levels.push_back(Level(_player));
	_act_level = _levels[0];

	// set the output handle
	handle_out = GetStdHandle(STD_OUTPUT_HANDLE);

	// set the cursor invisible
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(handle_out, &cursor_info);
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(handle_out, &cursor_info);

	draw_map();
}

Canvas::~Canvas() {}


/*
*	Draw all the game's objects, even the map
*/
void Canvas::draw_objects()
{	
	//_act_level.draw();
	obj_handler->draw();

	_player->draw_obj(*_player->getLastPos());
	_player->draw_obj(*_player->getPos(), _player->getAvatar());

	/*
	setCursorPosition(*_player->getLastPos());
	setCursorPosition(*_player->getPos(), _player->getAvatar());
	*/
}

void Canvas::draw_map() 
{
	_act_level.draw();
}

void Canvas::update()
{

	obj_handler->update();

	_player->update(_act_level.getActualRoom().getRoom());
	_act_level.update(_player);
	
}
