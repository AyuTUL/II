// Lab 2.3: Create a class Number with two int instance variable x and y. The class will have one constructor. The class also will contain member function getMax () that will return larger number. From main () function create an object of Number and print the larger number
#include <iostream>
using namespace std;
class Number
{
private:
	int x, y;

public:
	Number()
	{
		x = y = 0;
	}
	void read()
	{
		cout << "Enter 2 integers : ";
		cin >> x >> y;
	}
	int getMax()
	{
		if (this->x > this->y)
			return (this->x);
		else
			return (this->y);
	}
};
int main()
{
	Number n;
	int lar;
	n.read();
	lar = n.getMax();
	cout << "Larger Number = " << lar;
	return 0;
}