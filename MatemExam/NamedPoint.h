#ifndef NAMEDPOINT_H
#define NAMEDPOINT_H
#include "Point.h"
#include <iostream>
using namespace std;

template <typename T>

class NamedPoint : public Point<T>
{
string name;
public:
    NamedPoint(T x = 0, T y= 0, string name= " ");
    void displayIntoFile(ostream& out) override;
    void display() override;
    void setName(char name);
    void saveWithSpaces(ostream& out) override;
};
#endif