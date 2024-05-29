#include "Point.h"
using namespace std;

Point::Point(int x, int y) : x(x), y(y){}

void Point::displayIntoFile(ostream& out)
{
	out << "X:" << x << " Y: " << y <<  endl;
}


void Point::display()
{
	cout << "X:" << x << " Y: " << y << endl;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::addXY(int new_x, int new_y)
{
	x += new_x;
	y += new_y;
}

double Point:: distanceTo(Point& other)
{
	return sqrt(pow(x - other.x, 2)) + pow(y - other.y, 2);
}
