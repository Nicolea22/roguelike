#include "Game.h"

Game::Game()
{
	inGame = true;
	player = Player();
	map = Map();
}

Game::~Game() {}

void Game::update()
{
	player.update();
	map.update();
}

void Game::draw()
{
	player.draw();
	map.draw();
}

void Game::loop()
{
	while (inGame)
	{
		update();
		draw();
	}
}



