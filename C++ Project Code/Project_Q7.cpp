/* Q7.Write a program that takes n elements from the user and displays the second largest element of an array. */

#include <iostream>
using namespace std;

int main()
{
    int n, i, j = 0, lrg, lrg2nd;

    cout << "Input the size of array : ";
    cin >> n;

    int arr[n];
    /* Storing values into the array*/
    cout << "Input " << n << " elements in the array :\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /* find location of the largest element in the array */
    lrg = 0;
    for (i = 0; i < n; i++)
    {
        if (lrg < arr[i])
        {
            lrg = arr[i];
            j = i;
        }
    }

    /* ignore the largest element and find the 2nd largest element in the array */
    lrg2nd = 0;
    for (i = 0; i < n; i++)
    {
        if (i == j)
        {
            i++; /* ignoring the largest element */
            i--;
        }
        else
        {
            if (lrg2nd < arr[i])
            {
                lrg2nd = arr[i];
            }
        }
    }

    cout << "The Second largest element in the array is : " << lrg2nd << endl;
    return 0;
}
