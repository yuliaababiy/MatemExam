#include "Point.h"
using namespace std;

template <typename T>
Point<T>::Point(T x, T y) : x(x), y(y){}

template <typename T>
void Point::displayIntoFile(ostream& out)
{
	out << "X:" << x << " Y: " << y <<  endl;
}

template <typename T>
void Point<T>::display()
{
	cout << "X:" << x << " Y: " << y << endl;
}
template <typename T>
T Point<T>::getX()
{
	return x;
}
template <typename T>
T Point<T>::getY()
{
	return y;
}
template <typename T>
void Point<T>::subtractionXY(T new_x, T new_y)
{
	x -= new_x;
	y -= new_y;
}
template <typename T>
void Point<T>::multiplyXY(T new_x, T new_y)
{
	x *= new_x;
	y *= new_y;
}

template <typename T>
void Point<T>::addXY(T new_x, T new_y)
{
	x += new_x;
	y += new_y;
}
template <typename T>
double Point<T>:: distanceTo(Point<T>& other)
{
	return sqrt(pow(x - other.x, 2)) + pow(y - other.y, 2);
}
