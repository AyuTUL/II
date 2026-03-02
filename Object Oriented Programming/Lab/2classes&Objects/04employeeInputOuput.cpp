// Lab 2.4: Create a class called employee that contains a name (an array of characters) and an employee number (type long). Include the member function called getData () to read data from the user for insertion into object, and another function called putData() to display the data. Assume the name has no embedded spaces
#include <iostream>
using namespace std;
#define N 3
class Employee
{
private:
	char name[30];
	long int num;

public:
	void getData()
	{
		cout << "Enter employee number & name : ";
		cin >> num >> name;
	}
	void putData()
	{
		cout << endl
			 << endl
			 << "Employee Number : " << num << endl;
		cout << "Name : " << name;
	}
};
int main()
{
	int i;
	Employee e;
	e.getData();
	cout << "Employee Details : ";
	e.putData();
	return 0;
}