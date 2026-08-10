// Lab 1.17: Write a function power () to raise a number m to a power n. The function takes a double value for m and int value for n and returns the result correctly. Use a default value of 2 for n to make the function to calculate squares when this argument is omitted. Write a main that gets the value of m and n from the user to test the function
#include <iostream>
using namespace std;
double power(double m, int n = 2)
{
    double sum = 1;
    int i;
    if (n > 0)
        for (i = 0; i < n; i++)
            sum *= m;
    else
        for (i = 0; i < -n; i++)
            sum *= (1 / m);
    return (sum);
}
int main()
{
    double m;
    int n;
    cout << "Enter base & power : ";
    cin >> m >> n;
    cout << m << " raised to the power " << n << " = " << power(m, n) << endl;
    cout << "Enter base : ";
    cin >> m;
    cout << m << " raised to the power 2 = " << power(m) << endl;
    return 0;
}