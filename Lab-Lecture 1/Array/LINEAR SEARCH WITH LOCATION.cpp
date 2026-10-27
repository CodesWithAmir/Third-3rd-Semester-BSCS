/*
================================================================================
  PROGRAM: LINEAR SEARCH - VALUE LOCATION
  FILE: 4.cpp
  DATE: October 2026
  DESCRIPTION:
  Searches an array sequentially and reports the index of the first matching
  value. If the value does not exist, it reports that it was not found.
================================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "       LINEAR SEARCH: LOCATION          " << endl;
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

    int location = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == numSearch)
        {
            location = i;
            break;
        }
    }

    if (location != -1)
    {
        cout << "Number " << numSearch << " found at index "
             << location << "." << endl;
    }
    else
    {
        cout << "Number " << numSearch << " was not found in the array." << endl;
    }

    delete[] arr;
    return 0;
}
