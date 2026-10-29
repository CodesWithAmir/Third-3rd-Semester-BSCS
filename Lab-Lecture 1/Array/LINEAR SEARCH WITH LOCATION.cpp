/*
================================================================================
  PROGRAM: Linear Search with Index Location Tracking in C++
  DATE: September 2026
  DESCRIPTION: 
  Searches an array element-by-element and returns the EXACT index location 
  where the item is stored. Returns -1 if the target is not present.
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "  LINEAR SEARCH (LOCATION TRACKING)    " << endl;
    cout << "========================================" << endl;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    // Populating Array
    for(int i = 0; i < size; i++)
    {
        cout << "Enter value for index [" << i << "]: ";
        cin >> arr[i];
    }

    int num_search;
    cout << "\nEnter number to search: ";
    cin >> num_search;

    // --- SEARCH LOGIC ---
    // Sentinel value: -1 means the target location hasn't been found yet
    int location = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num_search)
        {
            location = i; // Save exact memory index
            break;        // Exit early once target is matched
        }
    }		

    // --- OUTPUT DISPLAY ---
    cout << "\n----------------------------------------" << endl;
    if (location != -1) // Alternative to (location > -1)
    {
        cout << "[SUCCESS] Value " << num_search << " found at Index: " << location << endl;
    }		  
    else
    {
        cout << "[NOT FOUND] Value " << num_search << " does not exist in array." << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}