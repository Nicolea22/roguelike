#include "Canvas.h"
#include "ObjectHandler.h"

Canvas::Canvas() {}

Canvas::Canvas(char identifier, int levelsAmount)
{
	obj_handler = ObjectHandler::get_instance();
	obj_handler->add(Player(4, 1, identifier));
	//_player = new Player(4, 1, identifier);

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
	
	obj_handler->draw();
	/*
	setCursorPosition(*_player->getLastPos());
	setCursorPosition(*_player->getPos(), _player->getAvatar());
	*/
}

void Canvas::draw_map() 
{
	vector<string> room_aux = _act_level.getActualRoom();

	for (int y = 0; y < room_aux.size(); y++)
	{
		for (int x = 0; x < room_aux[y].size(); x++)
		{
			setCursorPosition(Position(x,y), room_aux[y][x]);
		}
	}
}

void Canvas::update()
{
	/*
	_player->update(_act_level.getActualRoom());
	_act_level.update(_player);
	*/
}

void Canvas::setCursorPosition(Position pos, char obj)
{
	SHORT x = pos.getX();
	SHORT y = pos.getY();

	coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(handle_out, coord);

	cout << obj;
	cout.flush();

}