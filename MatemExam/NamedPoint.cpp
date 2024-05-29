#include "NamedPoint.h"
using namespace std;

NamedPoint::NamedPoint(int x, int y, char name)
	: Point(x, y), name(name){}

void NamedPoint::displayIntoFile(ostream& out)
{
	out << "X:" << x << " Y: " << y << " Name: " << name << endl;
}

void NamedPoint::display()
{
	cout << "X:" << x << " Y: " << y << " Name: " << name << endl;
}

void NamedPoint::setName(char name)
{ 
	this->name = name;
}
