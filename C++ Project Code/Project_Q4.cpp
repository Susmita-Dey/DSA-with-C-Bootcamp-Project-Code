/* Q4. Write a program to display Fibonacci Series upto nth term. (Using loops) */

#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0;
    cout << "Enter number of terms you want in a Fibonacci Series: ";
    cin >> n;

    cout << "Fibonacci Series upto " << n << "th term:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << endl;
    return 0;
}