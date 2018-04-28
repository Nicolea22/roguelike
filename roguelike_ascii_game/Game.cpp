#include "Game.h"
#include <iostream>
#include <conio.h>

Game::Game()
{
	inGame = true;
	char identifier;

	cout << "Please insert your character to use as an avatar" << endl;
	cin >> identifier;
	cout << endl;
	
	canvas = Canvas(identifier);
}

Game::~Game() {}

void Game::update()
{
	//canvas.update();
}

void Game::draw()
{
	canvas.draw();
}

void Game::clearScreen() 
{
	string clearScreenString(35, '\n');
	cout << clearScreenString;
}

void Game::loop()
{
	while (inGame)
	{
		update();
		draw();
		clearScreen();
		_getch();
	}
}