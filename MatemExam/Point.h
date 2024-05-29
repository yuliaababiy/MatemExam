#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point
{
protected:
	int x;
	int y;
public:
	Point(int x, int y);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	void addXY(int new_x, int new_y);
	int getX();
	int getY();
	double distanceTo(Point& other);
};
#endif // !POINT

