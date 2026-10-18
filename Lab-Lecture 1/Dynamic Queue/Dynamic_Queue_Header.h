#ifndef DYNAMIC_QUEUE_HEADER_H
#define DYNAMIC_QUEUE_HEADER_H

#include <iostream>
#include "Node.h"
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
    cout << "Queue values (front to rear): ";

    while (current != 0)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

#endif
