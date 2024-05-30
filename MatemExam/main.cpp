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
	int main 
	{
		vector <Point*> points;
	ofstream file("input.txt", ios::app);
	int choice;
	while (true)
	{
		cout << "Enter action u wanna to do:" << endl;
		cout << "1 - load from file and print" << endl;
		cout << "2 - add object to file" << endl;
		cout << "3 - print objects into file" << endl;
		cout << "4 - output the distance to the point" << endl;
		cout << "5 - get points added" << endl;
		cout << "6 - get points subtracted" << endl;
		cout << "7 - get points multiply" << endl;
		cout << "8 - find the biggest point" << endl;
		cout << "9 - multipy y by 2" << endl;
		cout << "10 - exit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			loadFromFile(points, "input.txt");
			displayPoint(points);
		}
		else if (choice == 2)
		{
			int x, y;
			char name;
			string type;
			cout << "Enter type Point or NamedPoint: ";
			cin >> type;
			if (type == "Point")
			{
				cout << "Enter x : ";
				cin >> x;
				cout << "Enter y: ";
				cin >> y;
				Point* c = new Point(x, y);
				c->saveWithSpaces(file);
			}
			else if (type == "NamedPoint")
			{
				cout << "Enter x : ";
				cin >> x;
				cout << "Enter y: ";
				cin >> y;
				cout << "Enter name : ";
				cin >> name;
				NamedPoint* e = new NamedPoint(x, y, name);
				e->saveWithSpaces(file);
			}
			else
			{
				cout << "You entered wrong!" << endl;
				break;
			}
		}
		else if (choice == 3)
		{
			loadFromFile(points, "input.txt");
			saveToFile(points, "output.txt");
		}
		else if (choice == 4)
		{
				return sqrt(pow(x - other.x, 2)) + pow(y - other.y, 2);
		}
		else if (choice == 5)
		{
			x += new_x;
			y += new_y;
		}
		else if (choice == 5)
		{
			x -= new_x;
			y -= new_y;
		}
		else if (choice == 5)
		{
			x *= new_x;
			y *= new_y;
		}
		else if (choice == 6)
		{
			loadFromFile(points, "input.txt");
			Point* theBiggest = new Point(0, 0);
			for (auto p : points)
			{
				if (p->getArea() > theBiggest->getX(), getY())
				{
					theBiggest = p;
				}
			}
			cout << "The biggest point: ";
			theBiggest->display();
			cout << endl;
		}
		else if (choice == 7)
		{
			int x = arr[0];

			for (int i = 1; i < arr.size(); ++i) {
				if (arr[i] > x) {
					x = arr[i];
				}
			}
		}
		else if (choice == 8)
		{
			y *= 2;
		}
	}
	// добавити лог≥ку з файлами (читанн€ з файлу, запис у файл (saveWithSpaces), запис у файл OO
	// добавити в≥дн≥манн€ на множенн€ на скал€р OO
	// 3 точки з файлу ≥ порахувати периметр та площу трикутника
	// знайти найб≥льшу точку х
	// помножити кожну точку у на 2
}

