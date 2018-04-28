#pragma once


class Player
{

public:

	Player();
	Player(int, int, char);
	~Player();

	void update();
	void draw();

	int getX() { return x; }
	int getY() { return y; }
	int getLife() { return life; }
	char getIdentifier() { return identifier; }

private:
	
	char identifier;
	int life;

	int x;
	int y;

	char input;
};