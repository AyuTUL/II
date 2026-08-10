// Lab 2.10: Create a USMoney class with two integer instance variables dollars and cents. Add a constructor with two parameters for initializing a USMoney object. The constructor should check that the cent   value is between 0 and 99 and, if not, transfer some cents to the dollars variables to make it between 0 and 99. For example, if x is a USMoney object with 5 dollars and 80 cents, and if y is a USMoney object with 1 dollar and 90 cents, then x.plus (y) will return a new USMoney object with 7 dollars and 70 cents. From a main () function create two objects of USMoney class and add them
#include <iostream>
using namespace std;
class USMoney
{
private:
	int dollar, cents;

public:
	USMoney(int d, int c)
	{
		dollar = d;
		cents = c;
	}
	USMoney plus(USMoney m)
	{
		dollar += m.dollar;
		cents += m.cents;
		if (cents > 99)
		{
			dollar += cents / 100;
			cents = cents % 100;
		}
		return (*this);
	}
	void show()
	{
		cout << char(36) << dollar << " and " << cents << char(155) << endl;
	}
};
int main()
{
	USMoney x(5, 80);
	USMoney y(1, 90);
	x.show();
	y.show();
	USMoney sum = x.plus(y);
	cout << "Sum = ";
	sum.show();
	return 0;
}