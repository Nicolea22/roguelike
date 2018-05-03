#ifndef CANVAS_H
#define CANVAS_H
#include <iostream>
#include <Windows.h>
#include "Level.h"
#include "Player.h"

using namespace std;

class Canvas
{
public:

	Canvas();
	Canvas(char, int);
	~Canvas();

	/*
	*	Draw all the game's objects, even the map
	*/
	void draw()
	{
		vector<string> room_aux = _act_level.getActualRoom();

		cout << "\t   ******************************" << endl;
		cout << "\t   *\tASCII ROGUELIKE GAME\t*" << endl;
		cout << "\t   ******************************" << endl;

		cout << endl;
		cout << "life: " << _player->getLife() << "\t\t";
		cout << "X: " << _player->getX();
		cout << "  Y: " << _player->getY();
		cout << "\t   score: " << _player->getScore() << endl;

		for (int y = 0; y < room_aux.size(); y++)
		{
			for (int x = 0; x < room_aux[y].size(); x++)
			{
				if (y == _player->getY() && x == _player->getX())
				{
					cout << _player->getAvatar();
					continue;
				}
				cout << room_aux[y][x];
			}
			cout << endl;
		}

	}
	void update();

private:
	Player* _player;
	int _levels_amount;
	vector <Level> _levels;
	Level _act_level;
};

#endif