#include<iostream>
#include "Queue_Header.h"
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of Queue: ";
    cin>>size;
    templateQueue<int> + q(size);
    int choice;
    do
    {
        cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Check if queue is full\n";
        cout << "5. Check if queue is empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.ENQUEUE(value);
            break;
        }
        case 2:
            q.DEQUEUE();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << (q.isFull() ? "Queue is full.\n" : "Queue is not full.\n");
            break;
        case 5:
            cout << (q.isEmpty() ? "Queue is empty.\n" : "Queue is not empty.\n");
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);
}