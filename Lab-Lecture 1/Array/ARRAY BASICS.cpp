/*
================================================================================
  PROGRAM: ARRAY BASICS
  FILE: 1.cpp
  DATE: October 2026
  DESCRIPTION:
  Demonstrates array declaration, direct index access, user input, and
  sequential display of array values.
================================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];

    cout << "========================================" << endl;
    cout << "             ARRAY BASICS              " << endl;
    cout << "========================================" << endl;

    cout << "Array size is fixed at " << size << "." << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value for index [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\nValues in the array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Index [" << i << "] -> " << arr[i] << endl;
    }

    cout << "\nValue at index 2 (3rd value) = " << arr[2] << endl;
    cout << "Value at index 0 (1st value) = " << arr[0] << endl;

    return 0;
}
