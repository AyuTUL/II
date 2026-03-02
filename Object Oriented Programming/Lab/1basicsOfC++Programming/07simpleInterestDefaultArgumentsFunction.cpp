// Lab 7: Write a C++ program that computer simple interest using default arguments function
#include <iostream>
using namespace std;
double si(double p, double t, double r = 7)
{
    return ((p * t * r) / 100);
}
int main()
{
    double p, t, r;
    cout << "Enter principal & time : ";
    cin >> p >> t;
    cout << "Simple Interest w/ default rate(7%) = " << si(p, t) << endl;
    cout << endl
         << "Enter principal, time & rate : ";
    cin >> p >> t >> r;
    cout << "Simple Interest w/ rate(" << r << "%) = " << si(p, t, r);
    return 0;
}