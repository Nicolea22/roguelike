#include "Canvas.h"
#include "Debug.h"

Canvas::Canvas() {}

Canvas::Canvas(char identifier, int levelsAmount)
{
	_player = Player(4, 1, identifier, 10);
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

	cout << "\t   ******************************" << endl;
	cout << "\t   *\tASCII ROGUELIKE GAME\t*"<< endl;
	cout << "\t   ******************************" << endl;

	cout << endl;
	cout << "life: " << _player.getLife();
	cout << "\t\t\t\t    score: " << _player.getScore() << endl;

	for (int y = 0; y < room_aux.size(); y++) 
	{
		for (int x = 0; x < room_aux[y].size(); x++)
		{
			if (y == _player.getY() && x == _player.getX()) 
			{
				cout << _player.getIdentifier();
				continue;
			}
			cout << room_aux[y][x];
		}
		cout << endl;
	}

}


void Canvas::update() 
{
	_player.update();
	_act_level.update();
}