/*
================================================================================
  PROGRAM: Selection Sort followed by Binary Search in C++
  DATE:  15 September 2026
  DESCRIPTION: 
  1. Accepts an unsorted array from the user.
  2. Sorts the array in ascending order using Selection Sort algorithm.
  3. Executes Binary Search on the sorted array to locate the target number.
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "    SELECTION SORT & BINARY SEARCH      " << endl;
    cout << "========================================" << endl;

    cout << "Enter size of array: ";
    cin >> size;

    // Array Declaration
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

    // --- STEP 1: SELECTION SORT ALGORITHM ---
    for (int i = 0; i < size - 1; i++)
    {
        int min = i; // Current element ko minimum assume karte hain
        
        // Unsorted part mein sab se chhota element dhoondna
        for(int j = i + 1; j < size; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j; // New minimum index update
            }
        }

        // Swap: Smallest found element ko correct position (i) par lao
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    int start = 0;
    int end = size - 1;
    int location = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == num_search)
        {
            location = mid;
            break;
        }

        if (arr[mid] > num_search)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    // --- SEARCH RESULT DISPLAY ---
    if (location != -1)
    {
        cout << "[SEARCH SUCCESS] Value " << num_search << " found at sorted index: " << location << endl;
    }
    else
    {
        cout << "[SEARCH FAILED] Value " << num_search << " does not exist in array." << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}