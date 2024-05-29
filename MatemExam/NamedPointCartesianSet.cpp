#include "NamedPointCartesianSet.h"
using namespace std;

NamedPointCartesianSet::NamedPointCartesianSet(int x, int y, string name) 
	: PointCartesianSet(x, y), name(name){}

void NamedPointCartesianSet::displayIntoFile(ostream& out)
{
	out << " Enter x:" << x << " Enter y: " << y << " Enter name: " << name << endl;
}


void NamedPointCartesianSet::display()
{
	cout << " Enter x:" << x << " Enter y: " << y << " Enter name: " << name << endl;
}

void setName(string name)
{ 
	this->name = name;
}
