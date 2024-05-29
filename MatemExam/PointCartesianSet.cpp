#include "PointCartesianSet.h"
using namespace std;

PointCartesianSet::PointCartesianSet(int x, int y) : x(x), y(y){}

void PointCartesianSet::displayIntoFile(ostream& out)
{
	out << " Enter x:" << x << " Enter y: " << y <<  endl;
}


void PointCartesianSet::display()
{
	cout << " Enter x:" << x << " Enter y: " << y << endl;
}

int PointCartesianSet::getX()
{
	return x;
}

int PointCartesianSet::getY()
{
	return y;
}

void PointCartesianSet::addXY(int new_x, int new_y)
{
	XY += newXY;
}

double distanceTo(PointCartesianSet& other)
{
	return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}
