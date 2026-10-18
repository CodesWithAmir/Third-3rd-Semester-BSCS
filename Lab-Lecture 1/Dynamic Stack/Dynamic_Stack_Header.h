
#include <iostream>
#include "Node.h"
using namespace std;

class DynamicStack
{
private:
    Node* top;

public:
    DynamicStack()
    {
        top = 0;
    }

    ~DynamicStack()
    {
        while (top != 0)
        {
            Node* deleteNode = top;
            top = top->next;
            delete deleteNode;
        }
    }

    bool isEmpty();
    void Push(double value);
    void Pop();
    void Display();
};

bool DynamicStack::isEmpty()
{
    return top == 0;
}

void DynamicStack::Push(double value)
{
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into stack." << endl;
}

void DynamicStack::Pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty. Cannot pop." << endl;
        return;
    }

    Node* deleteNode = top;
    cout << deleteNode->data << " popped from stack." << endl;
    top = top->next;
    deleteNode->next = 0;
    delete deleteNode;
}

void DynamicStack::Display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    Node* current = top;
    cout << "Stack values (top to bottom): ";

    while (current != 0)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}
