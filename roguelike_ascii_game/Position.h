#ifndef POS_H
#define POS_H
		
class Position
{
public:

	Position();
	Position(int, int);

	int getX() { return _x; }
	int getY() { return _y; }
	
	void setX(int);
	void setY(int);

	void setPosition(int, int);
	void setPosition(Position);

private:
	int _x;
	int _y;
};

#endif