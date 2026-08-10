// Lab 3.18: Write a program in C++ to convert an object of one class into an object of another class using conversion routine in destination class
#include <iostream>
using namespace std;
class NPR
{
private:
	double rs;

public:
	void read()
	{
		cout << "Enter amount in Nepali Rupees : ";
		cin >> rs;
	}
	void display()
	{
		cout << rs;
	}
	double getRs()
	{
		return (rs);
	}
};
class KRW
{
private:
	double won;

public:
	KRW()
	{
		won = 0;
	}
	void display()
	{
		cout << won;
	}
	KRW(NPR n)
	{
		double npr = n.getRs();
		won = npr * 9.89;
	}
};
int main()
{
	NPR n;
	KRW k;
	n.read();
	k = n;
	cout << "Equivalent amount in Korean Won = ";
	k.display();
	return 0;
}