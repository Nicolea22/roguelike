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


/*
*	Draw all the game's objects, even the map
*/
void Canvas::draw() 
{
	vector<string> room_aux = _act_level.getActualRoom();
	/*
	cout << "\t   ******************************" << endl;
	cout << "\t   *\tASCII ROGUELIKE GAME\t*" << endl;
	cout << "\t   ******************************" << endl;

	cout << endl;
	cout << "life: " << _player->getLife() << "\t\t";
	cout << "X: " << _player->getX();
	cout << "  Y: " << _player->getY();
	cout << "\t   score: " << _player->getScore() << endl;
	*/

	for (int y = 0; y < room_aux.size(); y++)
	{
		for (int x = 0; x < room_aux[y].size(); x++)
		{
			if (y == _player->getY() && x == _player->getX())
			{
				setCursorPosition(x, y, _player->getAvatar());
				continue;
			}
			setCursorPosition(x, y, room_aux[y][x]);
		}
		cout << endl;
	}
}

void Canvas::update()
{
	_player->update(_act_level.getActualRoom());
	_act_level.update(_player);
}

void Canvas::setCursorPosition(int x, int y, char obj)
{
	const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
	cout << obj;
	cout.flush();

}