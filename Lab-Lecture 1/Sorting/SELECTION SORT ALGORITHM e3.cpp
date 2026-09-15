/*
================================================================================
  PROGRAM: Selection Sort Algorithm in C++
  DATE: September 2026
  DESCRIPTION: 
  Finds the minimum element from the unsorted part of the array and swaps it 
  with the element at the current starting index. Repeatedly builds a sorted 
  subarray from left to right.
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "        SELECTION SORT ALGORITHM        " << endl;
    cout << "========================================" << endl;

    cout << "Enter size of array: ";
    cin >> size;

    // Array Allocation
    int arr[size];

    // Populating Array Elements
    cout << "\n--- Enter Array Elements ---" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter value for index [" << i << "]: ";
        cin >> arr[i];
    }

    // --- SELECTION SORT LOGIC ---
    // Outer loop position track karta hai jahan minimum element ko aana chahiye
    for (int i = 0; i < size - 1; i++)
    {
        int min = i; // Current index ko filhal minimum assume kar rahe hain
        
        // Inner loop baaki unsorted part mein sab se chhota element dhoondta hai
        for(int j = i + 1; j < size; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j; // Chhota element milne par min ka index update kar do
            }
        }

        // Swap: Sab se chhote element ko i index par le aao
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // --- PRINTING SORTED ARRAY ---
    cout << "\n----------------------------------------" << endl;
    cout << "[SUCCESS] Sorted Array (Ascending Order):" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Index [" << i << "] -> " << arr[i] << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}