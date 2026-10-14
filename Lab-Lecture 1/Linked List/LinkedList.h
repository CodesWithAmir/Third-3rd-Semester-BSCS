#include<iostream>
#include "Node.h"
using namespace std;
class LinkedList
{
	private:
		Node *head;
		Node *tail;
	public:
		LinkedList()
		{
			head=0;
			tail=0;
		}
	~LinkedList();
	bool isEmpty();
	void insertAtHead(double val);
	void insertAtTail(double val);
	void insertAfter(double existing,double val);
	void insertBefore(double existing,double val);
	void deleteFromHead();
	void deleteFromTail();
	void deleteNode(double existing);
	void traverseList();
};
bool LinkedList::isEmpty()
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
void LinkedList::insertAtHead(double val)
{
	Node *newNode=new Node(val);
	//case 1=List is Empty.
	if(head==0&&tail==0)
	{
		head=tail=newNode;
		
	}
	//case 2=List not Empty
	else
	{
		newNode->next=head; // yhaan pe dot (.) bhi as refrense operator use ho sktaa hai
		head=newNode;
	}
}
void LinkedList::insertAtTail(double val)
{
	Node *newNode=new Node(val);
	//case 1=List is Empty.
	if(head==0&&tail==0)
	{
		head=tail=newNode;
		
	}
	//case 2=List not Empty
	else
	{
		tail->next=newNode; // yhaan pe dot (.) bhi as refrense operator use ho sktaa hai
		tail=newNode;
	}
}
void LinkedList::insertAfter(double existing,double val)
//Insert after,Delete node,delete before
{
	if(isEmpty())
	{
		cout<<"List is Empty"<<endl;
	}
	else if(tail->data==existing)
	{
		insertAtTail(val);
	}
	
	else
	{
		Node *curr=head;
		while (curr!=0&&curr->data!=existing)
		{
			curr=curr->next;
		}
		if(curr==0)
		{
			cout<<"Existig value is not in the list"<<endl;
		}
		else
		{
			Node *newNode=new Node(val);
			newNode->next=curr->next;
		}
	}
}
void LinkedList::insertBefore(double existing,double val)
{
	if(isEmpty())
	{
		cout<<"List is Empty "<<endl;
	}
	else if(head->data==existing)
	{
		insertAtHead(val);
	}
	else
	{
		Node *curr=head->next;
		Node *prev=head;
		while(curr!=0&&curr->data!=existing)
		{
			prev=curr;
			curr=curr->next;
		}
		if(curr==0)
		{
			cout<<"Existing value is not in the List"<<endl;
		}
		else
		{
			Node *newNode=new Node(val);
			newNode->next=curr;
			prev->next=newNode;
		}
	}
}
void LinkedList::deleteFromHead()
{
	if(isEmpty())
	{
		cout<<"List is Empty "<<endl;
	}
	else if(head==tail)
	{
		Node *delNode=head;
		head=tail=0;
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
void LinkedList::deleteFromTail()
{
	if(isEmpty())
	{
		cout<<"List is Empty "<<endl;
	}
	else if(head==tail)
	{
		Node *delNode=head;
		head=tail=0;
		delete delNode;
	}
	else
	{
		Node *curr=tail;
		Node *prev=0;
		while(curr->next!=0)
		{
			prev=curr;
			curr=curr->next;
		}
		tail=prev;
		prev->next=0;//next=0
		delete curr;
	}
}
void LinkedList::deleteNode(double existing)
{
	if(isEmpty())
	{
		cout<<"List is Empty "<<endl;
	}
	else if(head->data==existing)
	{
		deleteFromHead();
	}
	else if(tail->data==existing)
	{
		deleteFromTail();
	}
	else
	{
		Node *curr=head->next;
		Node *prev=head;
		while(curr!=0&&curr->data!=existing)
		{
			prev=curr;
			curr=curr->next;
		}
		if(curr==0)
		{
			cout<<"Existing not in the List"<<endl;
		}
		else
		{
			prev->next=curr->next;
			curr->next=0;//precationary
			delete curr;
		}
	}
}
void LinkedList::traverseList()
{
	if(isEmpty())
	{
		cout<<"Link is Empty "<<endl;
	}
	else
	{
		int num=0;
		Node *curr=head;
		cout<<"Values in Link List are"<<endl;
		while(curr!=0)
		{
			cout<<curr->data<<"IT";
			curr=curr->next;
			num++;
		}
		cout<<endl;
		cout<<"Total number of nodes : "<<num<<endl;
	}
}
