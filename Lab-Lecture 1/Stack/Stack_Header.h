/*
================================================================================
  HEADER / MODULE: Dynamic Integer Stack Implementation (LIFO - Last In First Out)
  DATE: September 21, 2026
  DESCRIPTION: 
  Custom Stack data structure using dynamic memory allocation (Pointers).
  Demonstrates PUSH, POP, Overflow, and Underflow management.
================================================================================
*/

#include <iostream>
using namespace std;

class IntStack
{
private: 
    int* stackArray; // Dynamic array pointer
    int stackSize;   // Total capacity of the stack
    int top;         // Index of the top-most element

public:
    // Constructor: Allocates dynamic memory for stack array
    IntStack(int size)
    {
        stackArray = new int[size]; // Dynamic Array Allocation
        stackSize = size;
        top = -1;                   // -1 indicates empty stack
    }

    // Destructor: Deallocates dynamically allocated heap memory to avoid memory leaks
    ~IntStack()
    {
        delete [] stackArray;
    }

    // Stack Operations
    void PUSH(int val);
    void POP();
    void Display();
    bool isFull();
    bool isEmpty(); 
};

// Check if stack is full
bool IntStack::isFull()
{
    return (top == stackSize - 1);
}

// Check if stack is empty
bool IntStack::isEmpty()
{
    return (top == -1);
}

// PUSH: Inserts an element onto the top of the stack
void IntStack::PUSH(int val) 
{
    if (isFull())
    {
        cout << "[OVERFLOW] Stack is full! Cannot push " << val << endl;
    }
    else 
    {
        top++;
        stackArray[top] = val;
        cout << "[PUSH] " << val << " added to stack." << endl;
    }
}

// POP: Removes the top-most element from the stack
void IntStack::POP()
{
    if (isEmpty())
    {
        cout << "[UNDERFLOW] Stack is empty! Cannot pop element." << endl; 
    }
    else
    {
        cout << "[POP] " << stackArray[top] << " popped from stack." << endl;
        top--; // Logical deletion: Pointer decrement kar diya, actual value overwrite ho jaye gi
    }
}

// Display: Utility function to view stack content
void IntStack::Display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "\n--- Current Stack Elements (Top to Bottom) ---" << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << "| " << stackArray[i] << " |" << endl;
    }
    cout << "-----------------------------------------------" << endl;
}

// Driver Code for Verification
int main()
{
    IntStack myStack(3); // Creating stack of size 3

    myStack.PUSH(10);
    myStack.PUSH(20);
    myStack.PUSH(30);
    
    // Overflow test
    myStack.PUSH(40);

    myStack.Display();

    myStack.POP();
    myStack.Display();

    return 0;
}