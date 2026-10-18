#include<iostream>
#include "Node.h"
using namespace std;
class DynamicStack
{
	private:
		Node *head;
	public:
		DynamicStack()
		{
			head=0;
		}
	~DynamicStack();
	bool isEmpty();
	void Push(double val);
	void Pop();
};
bool DynamicStack::isEmpty()
{
	if(head==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void DynamicStack::Push(double val)
{
	Node *newNode=new Node(val);
	//case 1=List is Empty.
	if(head==0)
	{
		head=newNode;
		
	}
	//case 2=List not Empty
	else
	{
		newNode->next=head; // yhaan pe dot (.) bhi as refrense operator use ho sktaa hai
		head=newNode;
	}
}
void DynamicStack::Pop()
{
    if(isEmpty()){
		Node *delNode=head;
		delete delNode;
	}
	else
	{
		Node *delNode=head;
		head=head->next;
		delNode->next=0;//Precautionary choice
		delete delNode;
	}
}

