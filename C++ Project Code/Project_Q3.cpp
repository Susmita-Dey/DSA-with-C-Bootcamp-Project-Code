/* Q3. Write a program to check whether a year entered by a user is Leap year or not. */

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter any year: ";
    cin >> year;

    // checking for leap year
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year" << endl;
            }
            else
            {
                cout << year << " is not a leap year" << endl;
            }
        }
        else
        {
            cout << year << " is a leap year" << endl;
        }
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}