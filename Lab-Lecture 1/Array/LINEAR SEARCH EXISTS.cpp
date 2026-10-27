/*
================================================================================
  PROGRAM: LINEAR SEARCH - VALUE EXISTS OR NOT
  FILE: 3.cpp
  DATE: October 2026
  DESCRIPTION:
  Searches an array from the first value to the last value. It reports whether
  the requested value exists. Linear search works on sorted and unsorted arrays.
================================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "       LINEAR SEARCH: EXISTS            " << endl;
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

    int numSearch;
    cout << "Enter number to search: ";
    cin >> numSearch;

    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == numSearch)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Number " << numSearch << " found in the array." << endl;
    }
    else
    {
        cout << "Number " << numSearch << " was not found in the array." << endl;
    }

    delete[] arr;
    return 0;
}
