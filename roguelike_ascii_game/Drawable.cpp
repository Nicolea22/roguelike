#include "Drawable.h"

void Drawable::draw_obj(Position pos, char obj)
{
	SHORT x = pos.getX();
	SHORT y = pos.getY();

	coord = {x, y};
	SetConsoleCursorPosition(handle_out, coord);
	std::cout << obj;
	std::cout.flush();
}