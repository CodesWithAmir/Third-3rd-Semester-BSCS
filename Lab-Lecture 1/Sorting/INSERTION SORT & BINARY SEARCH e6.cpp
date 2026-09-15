/*
================================================================================
  PROGRAM: Insertion Sort followed by Binary Search in C++
  DATE: September 2026
  DESCRIPTION: 
  1. Sorts an unsorted array using Insertion Sort.
  2. Executes Binary Search on the sorted array to find a target value.
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "    INSERTION SORT & BINARY SEARCH      " << endl;
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

    // --- STEP 1: INSERTION SORT ---
    for(int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i;

        while(j > 0 && arr[j - 1] > temp)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    }

    // Printing Sorted Array
    cout << "\n----------------------------------------" << endl;
    cout << "[SUCCESS] Sorted Array (Ascending Order):" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Index [" << i << "] -> " << arr[i] << endl;
    }
    cout << "----------------------------------------" << endl;

    // --- STEP 2: BINARY SEARCH ---
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