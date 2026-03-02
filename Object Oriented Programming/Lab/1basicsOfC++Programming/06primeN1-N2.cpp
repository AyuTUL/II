// Lab 6 : Write a program in C++ that reads two numbers n1 and n2 and then print all prime numbers between n1 and n2
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, j;
    cout << "Enter range : ";
    cin >> n1 >> n2;
    cout << "Prime Numbers between " << n1 << " & " << n2 << " : " << endl;
    for (i = n1 + 1; i < n2; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > i / 2)
            cout << i << "\t";
    }
    return 0;
}