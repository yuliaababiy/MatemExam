#ifndef NAMEDPOINTCARTESIANSET_H
#define NAMEDPOINTCARTESIANSET_H
#include "PointCartesianSet.h"
#include <iostream>
using namespace std;

class NamedPointSet : public PointCartesianSet
{
protected:
    string name;
public:
    NamedPointSet(char name); 
    void displayIntoFile(ostream& out) override;
    void display() override;
    char getName();
    void setName(string name);
    void print(ostream& out) override;
    
};


#endif