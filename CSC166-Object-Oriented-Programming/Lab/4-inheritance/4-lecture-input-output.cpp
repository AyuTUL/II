// Lab 4.4: Create a class called lecture that stores ID and name of lectures. From this class derive two classes: part time, which adds payperhr (type float): and full time, which adds paypermonth(type float). Each of these three classes should have a readdata () function to get its data from user at the key board and printdata() function to display the data. Write a main() program to test the Full time and Part time classes by creating instance of them asking the user to fill their data with readdata () and display the data with printdata()
#include <iostream>
using namespace std;
class Lecture
{
public:
	int ID;
	string name;
	void readData()
	{
		cout << "Enter ID & name : ";
		cin >> ID >> name;
	}
	void printData()
	{
		cout << "ID : " << ID << endl
			 << "Name : " << name << endl;
	}
};
class PartTime : public Lecture
{
private:
	float payperhr;

public:
	void readData()
	{
		Lecture::readData();
		cout << "Enter pay / hour : ";
		cin >> payperhr;
	}
	void printData()
	{
		Lecture::printData();
		cout << "Pay per hour : " << payperhr << endl;
	}
};
class FullTime : public Lecture
{
private:
	float paypermonth;

public:
	void readData()
	{
		Lecture::readData();
		cout << "Enter pay / month : ";
		cin >> paypermonth;
	}
	void printData()
	{
		Lecture::printData();
		cout << "Pay per month : " << paypermonth << endl;
	}
};
int main()
{
	FullTime f;
	cout << "Enter full-time lecture details : " << endl;
	f.readData();
	PartTime p;
	cout << endl
		 << "Enter part-time lecture details : " << endl;
	p.readData();
	cout << endl
		 << "Full-time lecture details:" << endl;
	f.printData();
	cout << endl
		 << "Part-time lecture details:" << endl;
	p.printData();
	return 0;
}