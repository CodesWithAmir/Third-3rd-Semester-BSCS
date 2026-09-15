/*
================================================================================
  PROGRAM: Bubble Sort followed by Binary Search in C++
  DATE:  15 September 2026
  DESCRIPTION: 
  1. Accepts an unsorted array from the user.
  2. Sorts the array in ascending order using Bubble Sort algorithm.
  3. Uses Binary Search on the sorted array to find the target number.
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "     BUBBLE SORT & BINARY SEARCH        " << endl;
    cout << "========================================" << endl;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    // Populating Array Elements
    cout << "\n--- Enter Array Elements ---" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter value for index [" << i << "]: ";
        cin >> arr[i];
    }

    int num_search;
    cout << "\nEnter the number to search: ";
    cin >> num_search;

    // --- STEP 1: BUBBLE SORT ALGORITHM ---
    for(int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing Sorted Array
    cout << "\n----------------------------------------" << endl;
    cout << "[SUCCESS] Sorted Array (Ascending Order):" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Index [" << i << "] -> " << arr[i] << endl;
    }
    cout << "----------------------------------------" << endl;

    // --- STEP 2: BINARY SEARCH ALGORITHM ---
    // Sorted array par Binary Search apply kar rahe hain
    int start = 0;
    int end = size - 1;
    int location = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == num_search)
        {
            location = mid; // Match mil gaya
            break;
        }

        if (arr[mid] > num_search)
        {
            end = mid - 1;  // Target left half mein hai
        }
        else
        {
            start = mid + 1; // Target right half mein hai
        }
    }

    // --- SEARCH RESULT DISPLAY ---
    if (location != -1)
    {
        cout << "[SEARCH SUCCESS] Value " << num_search << " found at sorted index: " << location << endl;
    }
    else
    {
        cout << "[SEARCH FAILED] Value " << num_search << " does not exist in the array." << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}