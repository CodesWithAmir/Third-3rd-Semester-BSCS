/*
================================================================================
  PROGRAM: Linear Search Algorithm in C++
  DATE: September 2026
  DESCRIPTION: 
  Iterates through an array sequentially (element by element) to check 
  if a target value exists. Works on both sorted and unsorted arrays.
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "        LINEAR SEARCH ALGORITHM         " << endl;
    cout << "========================================" << endl;

    cout << "Enter size of array: ";
    cin >> size;

    // Array Allocation
    int arr[size];

    // Populating Array Elements
    for(int i = 0; i < size; i++)
    {
        cout << "Enter value for index [" << i << "]: ";
        cin >> arr[i];
    }

    int num_search;
    cout << "\nEnter number to search: ";
    cin >> num_search;

    // --- LINEAR SEARCH LOGIC ---
    bool found = false;
    int location = -1; // Index store karne ke liye

    // Sequential Iteration: Checks every element from index 0 to size-1
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num_search)
        {
            found = true;
            location = i; // Target index capture karo
            break;        // Element mil gaya, mazeed iterations ki zaroorat nahi
        }
    }		

    // --- OUTPUT DISPLAY ---
    cout << "\n----------------------------------------" << endl;
    if (found)
    {
        cout << "[SUCCESS] Number " << num_search << " found at index: " << location << endl;
    }		  
    else
    {
        cout << "[NOT FOUND] Number " << num_search << " does not exist in array." << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}
