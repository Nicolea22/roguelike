#include <iostream>
#include <conio.h>
#include "Game.h"

using namespace std;

Game::Game()
{
	inGame = true;
	char identifier;

	cout << "Please insert your character to use as an avatar" << endl;
	cin >> identifier;
	cout << endl;
	
	canvas = Canvas(identifier, LEVELS_AMOUNT);
}

Game::~Game() {}

void Game::update()
{
	canvas.update();
}

void Game::draw()
{
	canvas.draw();
}

void Game::clearScreen()
{
	string ClearScreenString(35, '\n');
	cout << ClearScreenString;
}

void Game::loop()
{
	while (inGame)
	{
		clearScreen();
		draw();
		update();
	}
}