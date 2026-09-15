#include<iostream>
using namespace std;

int main()
{
    // Date: 08 September 2026
    
    /* 
       ARRAY BASICS & MEMORY RULES:
       
       1. Declaration: Syntax is `DataType Name[Size];`
          - Size must be a constant positive integer. Brackets `[]` use hoti hain, `()` nahi.
          - Array size represents TOTAL capacity (e.g., 5 means it holds 5 elements).
          - Indexing zero-based hoti hai: 0 se lekar (Size - 1) tak.
          
       2. Naming Conventions:
          - Letters ya underscore (_) se start ho sakta hai. Numbers se start nahi ho sakta.
          - Spaces aur special characters (except _) allowed nahi hain.

       3. Memory Behavior:
          - Uninitialized local arrays mein 'Garbage Values' hoti hain (C++ auto-zero nahi karta).
          - Element delete karne ka matlab memory index khatam karna nahi hota, 
            sirf wahan ki value overwrite ya reset hoti hai. Index memory mein fixed rehta hai.
          - C++ primitive arrays (like int) direct 'null' store nahi karte.
    */

    int arr[5];

    // Demonstrating Random Access:
    // Array contiguous memory block hota hai, is liye kisi bhi index par 
    // direct jump karke value write/read ki ja sakti hai O(1) time mein.
    arr[2] = 14;   // Index 2 par direct write
    arr[0] = 19;   // Index 0 par direct write

    // Note: Neeche wala loop upar wali hardcoded values (14 aur 19) ko overwrite kar dega.
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter Value for index " << i << ": ";
        cin >> arr[i];
    }

    // Printing specific indices
    cout << "\nValue at Index 2 (3rd Element) = " << arr[2] << endl;
    cout << "Value at Index 0 (1st Element) = " << arr[0] << endl;

    return 0;

    /* 
       "Don't create your program with a developer's mind; 
        create it keeping the end-user in mind." - Prof. Mohsin
    */
}