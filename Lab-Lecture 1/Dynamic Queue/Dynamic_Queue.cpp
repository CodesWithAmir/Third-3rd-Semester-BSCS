#include <iostream>
#include "../Linked List/Node.h"
using namespace std;

class DynamicQueue
{
private:
    Node* front;
    Node* rear;

public:
    DynamicQueue()
    {
        front = 0;
        rear = 0;
    }

    ~DynamicQueue()
    {
        while (front != 0)
        {
            Node* deleteNode = front;
            front = front->next;
            delete deleteNode;
        }

        rear = 0;
    }

    bool isEmpty();
    void Enqueue(double value);
    void Dequeue();
    void Display();
};

bool DynamicQueue::isEmpty()
{
    return front == 0;
}

void DynamicQueue::Enqueue(double value)
{
    Node* newNode = new Node(value);

    if (isEmpty())
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " enqueued into queue." << endl;
}

void DynamicQueue::Dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }

    Node* deleteNode = front;
    cout << deleteNode->data << " dequeued from queue." << endl;
    front = front->next;
    deleteNode->next = 0;
    delete deleteNode;

    if (front == 0)
    {
        rear = 0;
    }
}

void DynamicQueue::Display()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }

    Node* current = front;
    cout << "Queue values: ";

    while (current != 0)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

int main()
{
    DynamicQueue queue;
    int choice;

    do
    {
        cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
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
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
