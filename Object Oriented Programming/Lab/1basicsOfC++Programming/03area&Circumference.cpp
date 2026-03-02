// Lab 3: Write a C++ program that reads radius of circle and finds area and circumference
#include <iostream>
#define PI 3.1416
using namespace std;
int main()
{
    float r, a, c;
    cout << "Enter radius of circle : ";
    cin >> r;
    a = PI * r * r;
    c = 2 * PI * r;
    cout << "Area of Circle = " << a;
    cout << endl
         << "Circumference of Circle = " << c;
    return 0;
}