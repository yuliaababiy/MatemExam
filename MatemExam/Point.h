#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>
using namespace std;

template<typename T>
class Point
{
protected:
	T x;
	T y;
public:
	Point(T x = 0, T y = 0);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	void addXY(T new_x, T new_y);
	void subtractionXY(T new_x, T new_y);
	void multiplyXY(T new_x, T new_y);
	virtual void saveWithSpaces(ostream& out);
	T getX();
	T getY();
	double distanceTo(Point<T>& other);
};
#endif // !POINT

