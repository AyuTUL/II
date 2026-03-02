// Lab 4.3: Create a class Box with instance variables length, breadth and height. Add one function getVolume () to compute the volume of box. Use suitable constructors. Create a subclass BoxWeight and add one variable weight. Add one function getWeight () that displays the weight of box to this class. Add suitable constructors. Create one more subclass class Shipment from BoxWeight.  Add one function getCost () that displays the cost of the box. Add suitable constructors. From main () function create an object of Shipment that initializes the instance variables through constructor
#include <iostream>
using namespace std;
class Box
{
public:
	int length, breadth, height;
	void getVolume()
	{
		int vol = length * breadth * height;
		cout << "Length = " << length << endl
			 << "Breadth = " << breadth << endl
			 << "Height = " << height << endl;
		cout << "Volume = " << vol << endl;
	}
	Box(int l, int b, int h)
	{
		length = l;
		breadth = b;
		height = h;
	}
};
class BoxWeight : public Box
{
public:
	double weight;
	void getWeight()
	{
		Box::getVolume();
		cout << "Weight = " << weight << endl;
	}
	BoxWeight(int l, int b, int h, double w) : Box(l, b, h)
	{
		weight = w;
	}
};
class Shipment : public BoxWeight
{
private:
	double cost;

public:
	void getCost()
	{
		BoxWeight::getWeight();
		cout << "Cost = " << cost;
	}
	Shipment(int l, int b, int h, double w, double c) : BoxWeight(l, b, h, w)
	{
		cost = c;
	}
};
int main()
{
	Shipment s(5, 3, 6, 80.69, 1532.632);
	s.getCost();
	return 0;
}