/*
================================================================================
  PROGRAM: DYNAMIC ARRAY
  FILE: 2.cpp
  DATE: October 2026
  DESCRIPTION:
  Creates an integer array at runtime according to the size entered by the
  user, stores values, displays all values, and demonstrates safe index access.
================================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "            DYNAMIC ARRAY              " << endl;
    cout << "========================================" << endl;

    cout << "Enter size of array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Array size must be greater than zero." << endl;
        return 1;
    }

    int* arr = new int[size];

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

    cout << "\nValue at index 0 (1st value) = " << arr[0] << endl;

    if (size > 2)
    {
        cout << "Value at index 2 (3rd value) = " << arr[2] << endl;
    }
    else
    {
        cout << "Index 2 is not available because the array has fewer than 3 values." << endl;
    }

    delete[] arr;
    return 0;
}
