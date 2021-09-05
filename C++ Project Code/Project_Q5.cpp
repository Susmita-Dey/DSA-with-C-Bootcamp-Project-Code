/* Q5. Write a program to check whether a number is Prime or Not. */

#include <iostream>
using namespace std;

int main()
{
    int n, f = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 0;
        }
    }
    
    if (f == 1)
    {
        cout << n << " is prime" << endl;
    }
    else
    {
        cout << n << " is not prime" << endl;
    }

    return 0;
}