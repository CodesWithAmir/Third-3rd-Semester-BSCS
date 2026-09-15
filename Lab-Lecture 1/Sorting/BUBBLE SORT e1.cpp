/*
================================================================================
  PROGRAM: Bubble Sort Algorithm in C++
  DATE: September 2026
  DESCRIPTION: 
  Sorts an array in ascending order using the Bubble Sort technique (adjacent 
  element comparison and swapping).
================================================================================
*/

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "========================================" << endl;
    cout << "         BUBBLE SORT ALGORITHM          " << endl;
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
    cout << "\nEnter the number to search (Note: Search logic to be implemented): ";
    cin >> num_search;

    // --- BUBBLE SORT LOGIC ---
    // Outer loop passes (iterations) ko count karta hai
    for(int i = 0; i < size - 1; i++)
    {
        // Inner loop adjacent elements ko compare karke swap karta hai
        for (int j = 0; j < size - i - 1; j++)
        {
            // Swap condition: Agar current element agle element se bada hai
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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