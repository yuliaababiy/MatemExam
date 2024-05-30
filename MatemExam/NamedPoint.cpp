#include "NamedPoint.h"
using namespace std;

template <typename T>
NamedPoint<T>::NamedPoint<T>(T x, T y, T name)
	: Point(x, y), name(name){}

template <typename T>
void NamedPoint<T>::displayIntoFile(ostream& out)
{
	out << "X:" << x << " Y: " << y << " Name: " << name << endl;
}

template <typename T>
void NamedPoint<T>::display()
{
	cout << "X:" << x << " Y: " << y << " Name: " << name << endl;
}

template <typename T>
void NamedPoint<T>::setName(char name)
{ 
	this->name = name;
}
