/*
 Stack header
 date 21 september 2026
*/

#include<iostream>
using namespace std;
class IntStack
{
	 private: 
	    char*  stackArray;
	    int   stackSize;
		int   top;
	 public:
	   IntStack(int size)
	   {
	   	stckArray = new char(size);  //declaring pointer as array
	   	stackSize = size;
	   	top=-1;
		}
		~IntStack()
		{
			delete []stackArray;
		}
		void PUSH(char vol);
		void POP();
		void Display();
		bool isFull();
		bool isEmpty();	
};
bool IntStack::isFull()
{
	if(top==stackSize-1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool IntStack::isEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
void IntStack::PUSH(char vol) 
{
	if(isFull())
{
	cout<<"Stack is overflow "<<endl;
}
else 
{
	top++;
	StackArray[top]=vol;
}
}
bool IntStack::POP()
{
	if(isEmpty())
	{
	  cout<<"Stack is under flow"<<endl;     
	  //Array comes with a fixed size & you can never store nul value 0r -ve in any int data type
	}
	else
	{
		cout<<stackArray[top]<<"is popped out from Stack "<<endl;
		top--;
	}
}


