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
