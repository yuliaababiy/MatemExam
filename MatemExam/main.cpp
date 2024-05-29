#include <iostream>
#include <algorithm>
#include "Point.h"
#include "NamedPoint.h"
#include <vector>
#include <fstream>
#include <set>


void displayPoint(vector<Point*>& cartesians)
{
	for (auto cartesian : cartesians)
	{
		cartesian->display();
	}
	cartesians.clear();
}

void saveToFile(vector <Point*>& cartesians, string filename)
{
	ofstream file(filename);
	for (auto cartesian : cartesians)
	{
		cartesian->displayIntoFile(file);
	}
}


void loadFromFile(vector <Point*>& cartesians, string filename)
{
	ifstream file(filename);
	int x, y;
	char name;
	string type;
	while (file >> type >> x >> y >> name)
	{
		if (type == "Point")
		{
			cartesians.push_back(new Point(x, y));
		}
		else if (type == "NamedPoint")
		{
			file >> name;
			cartesians.push_back(new NamedPoint(x, y, name ));
		}
	}
	// добавити лог≥ку з файлами (читанн€ з файлу, запис у файл (saveWithSpaces), запис у файл
	// добавити в≥дн≥манн€ на множенн€ на скал€р
	// 3 точки з файлу ≥ порахувати периметр та площу трикутника
	// знайти найб≥льшу точку х
	// помножити кожну точку у на 2
}

