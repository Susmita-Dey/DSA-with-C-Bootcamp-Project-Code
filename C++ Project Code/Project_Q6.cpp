/* Q6. Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // Loop for traversing rows
    {
        // Loop for printing spaces
        for (int sp = 0; sp <= (n - i - 1); sp++)
        {
            cout << " ";
        }
        // Loop for printing stars column-wise
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}