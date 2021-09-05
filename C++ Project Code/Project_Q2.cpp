/* Q2. Write a program to find the largest number among three numbers entered by the user. */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the values of a, b and c:" << endl;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a << " is the largest number" << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is the largest number" << endl;
    }
    else
    {
        cout << c << " is the largest number" << endl;
    }

    return 0;
}