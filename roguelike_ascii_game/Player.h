#pragma once


class Player
{

public:

	Player();
	Player(char, int, int);
	~Player();

	void update();
	void draw();

	int getX() { return x; }
	int getY() { return y; }
	int getLife() { return life; }
	int getIdentifier() { return identifier; }

private:
	
	char identifier;
	int life;
	int x;
	int y;

};