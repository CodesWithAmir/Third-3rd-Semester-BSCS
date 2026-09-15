/*
================================================================================
  PROGRAM: Insertion Sort Algorithm in C++
  DATE: September 2026
  DESCRIPTION: 
  Sorts an array by virtually splitting it into a sorted and an unsorted part. 
  Values from the unsorted part are picked and placed at the correct position 
  in the sorted part.
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "        INSERTION SORT ALGORITHM        " << endl;
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

    // --- INSERTION SORT LOGIC ---
    // Index 1 se start karte hain kyunki index 0 ko already sorted mana jata hai
    for(int i = 1; i < size; i++)
    {
        int temp = arr[i]; // Insert hone wala current element
        int j = i;

        // Shift elements of sorted subarray that are greater than temp
        while(j > 0 && arr[j - 1] > temp)
        {
            arr[j] = arr[j - 1]; // Right shift
            j--;
        }
        
        arr[j] = temp; // Correct position par place kar do
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