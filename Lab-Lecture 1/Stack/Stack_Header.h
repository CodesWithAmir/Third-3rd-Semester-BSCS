/*
  Stack Header / Implementation
  Date: 21 September 2026
*/

#include<iostream> // Standard input/output library
using namespace std;

class IntStack
{
	private : 
	    int*   stackArray; // Pointer to dynamically allocate the stack array
	    int    stackSize;  // Capacity of the stack
		int    top;        // Tracks top element index (-1 means empty)

	public :
	   IntStack(int size)
	   {
	   	stackArray = new int[size];  // Dynamic array memory allocation in heap
	   	stackSize = size;
	   	top = -1;                   // Initialize stack as empty
	   }

	   ~IntStack()
	   {
	   	delete [] stackArray;        // Free allocated heap memory to prevent memory leaks
	   }

	   void PUSH(int val);
	   void POP();
	   void Display();
	   bool isFull();
	   bool isEmpty();	
};

// Check if stack has reached its maximum size
bool IntStack :: isFull()
{
	if(top == stackSize - 1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

// Check if stack contains no elements
bool IntStack :: isEmpty()
{
	if(top == -1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

// PUSH: Adds an element to the top of the stack
void IntStack :: PUSH(int val) 
{
	if(isFull())
	{
		cout << "Stack is overflow " << endl; // Boundary check: Overflow condition
	}
	else 
	{
		top++;                  // Move top pointer up
		stackArray[top] = val;  // Store new value at top position
	}
}

// POP: Removes the top element from the stack
void IntStack :: POP()
{
	if(isEmpty())
	{
	  cout << "Stack is underflow" << endl; // Boundary check: Underflow condition
	  // Note: Array comes with a fixed size & you can never store null value or -ve in any int data type
	}
	else
	{
		cout << stackArray[top] << " is popped out from Stack " << endl;
		top--; // Logical deletion: Only decrementing index counter
	}
}
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
