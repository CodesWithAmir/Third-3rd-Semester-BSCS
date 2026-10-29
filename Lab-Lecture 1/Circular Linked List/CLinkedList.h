#include<iostream>
#include "Node.h"
using namespace std;

class CLinkedList
{
	private:
		Node* head;
	public:
		CLinkedList()
		{
			head=0;
		}
		void insertAtHead(double val);
		void insertAtLast(double val);
		void insertAfter(double existing,double val);
		void insertBefore(double existing,double val);
		void deleteFromHead();
		void deleteFromLast();
		void deleteNode(double existing);
		void traverseList();
		bool isEmpty();
		void insertSorted(double val);
		~CLinkedList();
};
void CLinkedList::insertAtHead(double val)
{
	Node *newNode=new Node(val);
	//case 1=List is Empty.
	if(head==0)
	{
		head=newNode;
		newNode->next=head;
	}
	//case 2=List not Empty
	else
	{
		newNode->next=head;
		Node *curr=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		curr->next=newNode;
		head=newNode;
	}
}
void CLinkedList::insertAtLast(double val)
{
	Node *newNode=new Node(val);
	//case 1=List is Empty.
	if(head==0)
	{
		head=newNode;
		newNode->next=head;
	}
	//case 2=List not Empty
	else
	{
		Node *curr=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		curr->next=newNode;
		newNode->next=head;
	}
}
void CLinkedList::insertAfter(double existing,double val)
{
	//case 1=List is Empty
	if(head==0)
	{
		cout<<"List is Empty. Insertion failed"<<endl;
	}
	else
	{
		Node *curr=head;
		while(curr->data!=existing&&curr->next!=head)
		{
			curr=curr->next;
		}
		if(curr->data!=existing&&curr->next!=head)
		{
			cout<<existing<<" is not found in the List. Insertion failed"<<endl;
		}
		else
		{
			Node *newNode=new Node(val);
			newNode->next=curr->next;
			curr->next=newNode;
		}
		
	}
}
void CLinkedList::deleteFromHead()
{
	if(head->next==head)
	{
		cout<<"This List is Empty . Deletion Failed"<<endl;
	}
	else if(head->next==head)
	{
        Node *delNode=head;
		head=0;
		delete delNode;
	}
	else
	{
        Node *delNode=head;
		Node *curr=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		head=head->next;
		curr->next=head;
		delete delNode;
	}
}
void CLinkedList::deleteNode(double existing)
{
    if(head==0)
	{
		cout<<"List is Empty "<<endl;
	}
	else if(head->data==existing)
	{
		deleteFromHead();
	}
	else
	{
		Node *curr=head->next;
		Node *prev=head;
		while(curr->next!=head&&curr->data!=existing)
		{
			prev=curr;
			curr=curr->next;
		}
		if(curr==head)
		{
			cout<<existing	<<" is not found in the List. Deletion failed"<<endl;
		}
		else
		{
			prev->next=curr->next;
			curr->next=0;
			delete curr;
		}
		
	}
}
void CLinkedList::traverseList()
{
	if(head==0)
	{
		cout<<"List is Empty "<<endl;
	}
	else
	{
		Node *curr=head;
		do
		{
			cout<<curr->data<<" ";
			curr=curr->next;
		}while(curr!=head);
		cout<<endl;
	}
}