#include "Canvas.h"

Canvas::Canvas() {}

Canvas::Canvas(char identifier, int levelsAmount)
{
	_player = Player(4, 1, identifier, 10);
	_levels_amount = levelsAmount;

	for (int i = 0; i < levelsAmount; i++) 
	{
		_levels[i] = Level(_player);
	}

	_act_level = _levels[0];
}

Canvas::~Canvas() {}

/*
*	Draw all the game's objects, even the map
*/
void Canvas::draw()
{
	cout << "\t   ******************************" << endl;
	cout << "\t   *\tASCII ROGUELIKE GAME\t*"<< endl;
	cout << "\t   ******************************" << endl;

	cout << endl;
	cout << "life: " << _player.getLife();
	cout << "\t\t\t\t    score: " << _player.getScore() << endl;
	/*
	vector<string> roomAux = level.getActualRoom();

	for (int y = 0; y < roomAux.size(); y++) 
	{
		for (int x = 0; x < roomAux[y].size(); x++)
		{
			cout << roomAux[y][x];
		}
		cout << endl;
	}
	*/
}


void Canvas::update() 
{
	_player.update();
	_act_level.update();
}