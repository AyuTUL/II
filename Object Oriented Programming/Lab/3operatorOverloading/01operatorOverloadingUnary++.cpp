// Lab 3.1: Write a program in C++ that overloads unary operator ++
#include <iostream>
using namespace std;
class Space
{
private:
	int x, y, z;

public:
	void read()
	{
		cout << "Enter x,y & z component of 3-D vector : ";
		cin >> x >> y >> z;
	}
	void show()
	{
		cout << "( " << x << " , " << y << " , " << z << " )" << endl;
	}
	void operator++()
	{
		++x;
		++y;
		++z;
	}
};
int main()
{
	Space s;
	s.read();
	s.show();
	cout << "After increment :" << endl;
	++s;
	s.show();
	return 0;
}