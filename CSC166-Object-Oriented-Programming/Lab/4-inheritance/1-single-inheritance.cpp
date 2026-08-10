// Lab 4.1: Create a class Room with instance variables length and breadth. Add one function getArea () that returns the area of the room. Create a subclass MyRoom and add one instance variable height. Add one function getVolume () that returns the volume. From main () function create two MyRoom objects and find area and volumes of both rooms
#include <iostream>
using namespace std;
class Room
{
public:
	double length, breadth;
	double getArea()
	{
		return (length * breadth);
	}
	Room(double l, double b)
	{
		length = l;
		breadth = b;
	}
	void output()
	{
		cout << "Length = " << length << endl
			 << "Breadth = " << breadth << endl;
		cout << "Area = " << getArea() << endl;
	}
};
class MyRoom : public Room
{
private:
	double height;

public:
	double getVolume()
	{
		return (getArea() * height);
	}
	MyRoom(double l, double b, double h) : Room(l, b)
	{
		height = h;
	}
	void output()
	{
		cout << "Height = " << height << endl;
		Room::output();
		cout << "Volume = " << getVolume() << endl;
	}
};
int main()
{
	MyRoom r1(3.141, 20.66, 9.69), r2(4.22, 4.65, 4.21);
	cout << "For Room 1 :" << endl;
	r1.output();
	cout << endl
		 << "For Room 2 :" << endl;
	r2.output();
	return 0;
}