/* Q1. Write a program to Swap two numbers. */

#include <iostream>
using namespace std;

void swap(int *a, int *b); //function declaration

int main()
{
    int a, b;
    cout << "Enter values of a and b:" << endl;
    cin >> a >> b;
    swap(&a, &b); //calling the function
    
    // printing the values after swapping
    cout << "The value of a & b after swapping is:\n" << a << " " << b << endl;
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}