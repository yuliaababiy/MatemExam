#ifndef NAMEDPOINT_H
#define NAMEDPOINT_H
#include "Point.h"
#include <iostream>
using namespace std;

class NamedPoint : public Point
{
protected:
    char name;
public:
    NamedPoint(int x, int y, char name);
    void displayIntoFile(ostream& out) override;
    void display() override;
    void setName(char name);
};
#endif