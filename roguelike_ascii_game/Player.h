#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include "Position.h"
#include "Entity.h"

using namespace std;

class Player : public Entity
{

public:

	Player(int, int, char);
	Player(Position, char);

	~Player();

	void update(vector<string>);

	int getScore() { return _score; }
	int getLife() { return _life; }

private:

	int _life;
	int _score;

	char input;
};
#endif