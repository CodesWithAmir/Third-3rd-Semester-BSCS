#include <iostream>
using namespace std;

int main() 
{
    int size;

    cout << "========================================" << endl;
    cout << "        BINARY SEARCH ALGORITHM         " << endl;
    cout << "========================================" << endl;

    // IMPORTANT: Binary Search srf SORTED array pe kaam karta hai!
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "\n[NOTE: Enter values in ASCENDING order (e.g., 10 20 30 40)]" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    int num_search;
    cout << "\nEnter number to search: ";
    cin >> num_search;

    // --- BINARY SEARCH LOGIC ---
    int start = 0;             // Pehla index
    int end = size - 1;        // Aakhri index
    int location = -1;         // Default -1 matlab value nahi mili

    while (start <= end) 
    {
        // 1. Array ke middle element ka index nikalo
        int mid = (start + end) / 2;

        // 2. CHECK 1: Agar middle value hi hamara target hai
        if (arr[mid] == num_search) 
        {
            location = mid;   // Index save karo
            break;            // Loop stop kar do
        }

        // 3. CHECK 2: Agar middle value target se BADI hai
        // Matlab target left side par hai, is liye 'end' ko peeche lao
        if (arr[mid] > num_search) 
        {
            end = mid - 1;
        } 
        // 4. CHECK 3: Agar middle value target se CHHOTI hai
        // Matlab target right side par hai, is liye 'start' ko aage le jao
        else 
        {
            start = mid + 1;
        }
    }

    // --- OUTPUT DISPLAY ---
    cout << "\n----------------------------------------" << endl;
    if (location != -1) 
    {
        cout << "[SUCCESS] Number " << num_search << " found at index: " << location << endl;
    } 
    else 
    {
        cout << "[NOT FOUND] Number " << num_search << " does not exist in the array." << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}