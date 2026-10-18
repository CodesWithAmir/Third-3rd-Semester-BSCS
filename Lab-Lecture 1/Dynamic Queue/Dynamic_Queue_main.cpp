#include <iostream>
#include "Dynamic_Queue_Header.h"
using namespace std;

int main()
{
    DynamicQueue queue;
    int choice;

    do
    {
        cout << "\n--- Dynamic Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
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
            queue.Enqueue(value);
            break;
        }
        case 2:
            queue.Dequeue();
            break;
        case 3:
            queue.Display();
            break;
        case 4:
            cout << (queue.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
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
