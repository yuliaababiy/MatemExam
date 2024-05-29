#include "NamedPoint.h"
using namespace std;

NamedPoint::NamedPoint(int x, int y, char name)
	: Point(x, y), name(name){}

void NamedPoint::displayIntoFile(ostream& out)
{
	out << " Enter x:" << x << " Enter y: " << y << " Enter name: " << name << endl;
}

void NamedPoint::display()
{
	cout << " Enter x:" << x << " Enter y: " << y << " Enter name: " << name << endl;
}

void NamedPoint::setName(char name)
{ 
	this->name = name;
}
