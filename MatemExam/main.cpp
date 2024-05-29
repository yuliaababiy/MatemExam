#include <iostream>
#include <algorithm>
#include "PointCartesianSet.h"
#include "NamedPointCartesianSet.h"
#include <vector>
#include <fstream>
#include <set>


void displayPointCartesianSet(vector<PointCartesianSet*>& cartesians)
{
	for (auto cartesian : cartesians)
	{
		cartesian->display();
	}
	cartesians.clear();
}

void saveToFile(vector <PointCartesianSet*>& cartesians, string filename)
{
	ofstream file(filename);
	for (auto cartesian : cartesians)
	{
		cartesian->displayIntoFile(file);
	}
}


void loadFromFile(vector <PointCartesianSet*>& cartesians, string filename)
{
	ifstream file(filename);
	int x, y;
	string name;
	while (file >> type >> x >> y >> name)
	{
		if (type == "PointCartesianSet")
		{
			cartesians.push_back(new PointCartesianSet(x, y));
		}
		else if (type == "NamedPointCartesianSet")
		{
			file >> namedPointCartesianSet;
			cartesians.push_back(new NamedPointCartesianSet(x, y, name ));
		}
	}
}

