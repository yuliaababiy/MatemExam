#ifndef POINTCARTESIANSET_H
#define POINTCARTESIANSET_H
#include <iostream>
using namespace std;

class PointCartesianSet
{
	int x;
	int y;
public:
	PointCartesianSet(int x, int y);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	void addXY(int new_x, int new_y);
	int getX();
	int getY();
	double distanceTo(PointCartesianSet& other);
};
#endif // !POINTCARTESIANSET

