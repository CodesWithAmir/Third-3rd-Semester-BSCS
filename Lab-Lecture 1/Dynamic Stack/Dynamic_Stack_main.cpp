#include <iostream>
#include "Dynamic_Stack_Header.h"
using namespace std;

int main()
{
    DynamicStack stack;
    int choice;

    do
    {
        cout << "\n--- Dynamic Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Check Empty\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double value;
            cout << "Enter value: ";
            cin >> value;
            stack.Push(value);
            break;
        }
        case 2:
            stack.Pop();
            break;
        case 3:
            stack.Display();
            break;
        case 4:
            cout << (stack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
