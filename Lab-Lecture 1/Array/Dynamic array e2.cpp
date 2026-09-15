#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size of Array: ";
    cin >> size;

    // Dynamic Stack Allocation (Variable Length Array - VLA)
    // Note: VLA standard C++ ka part nahi hai, par GCC/Clang compilers isay allow karte hain.
    int arr[size];

    // Populating the Array
    for(int i = 0; i < size; i++)
    {
        cout << "Enter Value for index [" << i << "]: ";
        cin >> arr[i];
    }

    // Sequential Traversal (Displaying all elements)
    cout << "Values in the array are:" << endl; 
    for(int i = 0; i < size; i++)
    {
        cout << "Index " << i << " -> " << arr[i] << endl;
    }

    // Direct Index Access
    // WARNING: Agar user ne size 2 ya us se kam enter kiya, toh arr[2] access karne par 
    // Out-of-Bounds Error / Garbage Value mil sakti hai.
    cout << "3rd Element (Index 2) = " << arr[2] << endl;
    cout << "1st Element (Index 0) = " << arr[0] << endl;

    return 0;
}