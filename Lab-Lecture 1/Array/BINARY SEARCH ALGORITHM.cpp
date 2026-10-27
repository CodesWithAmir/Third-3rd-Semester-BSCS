/*
================================================================================
  PROGRAM: BINARY SEARCH
  FILE: 5.cpp
  DATE: October 2026
  DESCRIPTION:
  Searches for a value in an array using Binary Search. The user must enter
  values in ascending order because Binary Search works only on sorted arrays.
  Each step removes half of the remaining search range.
================================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "        BINARY SEARCH ALGORITHM         " << endl;
    cout << "========================================" << endl;

    cout << "Enter size of array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Array size must be greater than zero." << endl;
        return 1;
    }

    int* arr = new int[size];

    cout << "\nEnter values in ascending order." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value for index [" << i << "]: ";
        cin >> arr[i];
    }

    int numSearch;
    cout << "Enter number to search: ";
    cin >> numSearch;

    int start = 0;
    int end = size - 1;
    int location = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == numSearch)
        {
            location = mid;
            break;
        }

        if (arr[mid] > numSearch)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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
