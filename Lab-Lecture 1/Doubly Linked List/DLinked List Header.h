#include<iostream>
#include "DNode.h"
using namespace std;
class DLinkedList
{
    private:
        DNode *head;
        DNode *tail;
    public:
        DLinkedList()
        {
            head=0;
            tail=0;
        }
    ~DLinkedList();
    bool isEmpty();
    void insertAtHead(double val);
    void insertAtTail(double val);
    void insertAfter(double existing,double val);
    void insertBefore(double existing,double val);
    void deleteFromHead();
    void deleteFromTail();
    void deleteNode(double existing);
    void traverseList();
    void insertSorted(double val);
    void reverseTriverseList();
};
bool DLinkedList::isEmpty()
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
void DLinkedList::insertAtHead(double val)
{
    DNode *newNode=new DNode(val);
    //case 1=List is Empty.
    if(isEmpty())
    {
        head=tail=newNode;
    }
    else
    {
        //case 2=List has Elements
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void DLinkedList::insertAtTail(double val)
{
    DNode *newNode=new DNode(val);
    //case 1 = List is Empty;
    if(isEmpty())
    {
        head=tail=0;
    }
    //case 2 = List has Elements
    else
    {
        newNode->prev=tail;
        tail=newNode;
    }
}
void DLinkedList::insertAfter(double existing, double val)
{
    //case 1 = List is Empty
    if(isEmpty())
    {
        cout<<"List is empty . Insertion is not possible"<<endl;
    }
    else if (tail->data==existing)
    {
        insertAtTail(val);

    }
    else
    {
        DNode *curr=head;
        while(curr!=0&&curr->data!=existing)
        {
            curr=curr->next;
        }
        if(curr==0)
        {
            cout<<"Exissting vale is not int the List . Insertion failed."<<endl;
        }
        else
        {
            DNode *newNode=new DNode(val);
            newNode->next=curr->next;
            newNode->prev=curr;
            curr->next->prev=newNode;
            curr->next=newNode;
        }
    }
}
void DLinkedList::insertBefore(double existing, double val)
{
    //case 1 = List is Empty
    if(isEmpty())
    {
        cout<<"List is empty . Insertion is not possible"<<endl;
    }
    else if (tail->data==existing)
    {
        insertAtTail(val);

    }
    else
    {
        DNode *curr=head;
        while(curr!=0&&curr->data!=existing)
        {
            curr=curr->next;
        }
        if(curr==0)
        {
            cout<<"Exissting value is not int the List . Insertion failed."<<endl;
        }
        else
        {
            DNode *newNode=new DNode(val);
            newNode->next=curr;
            newNode->prev=curr->prev;
            curr->prev->next=newNode;
            curr->prev=newNode;
        }
    }
}
void DLinkedList::deleteFromHead()
{
    //case 1 = List is Empty
    if(isEmpty())
    {
        cout<<"List is empty . Deletion is not possible"<<endl;
    }
    else if (head==tail)
    {
        DNode *delNode=head;
        head=tail=0;
        cout<<delNode->data<<" is deleted from the List"<<endl;
        delete delNode;
    }
    else
    {
        DNode *delNode=head;
        head=head->next;
        head->prev=0;
        cout<<delNode->data<<" is deleted from the List"<<endl;
        delete delNode;
    }
}
void DLinkedList::deleteFromTail()
{
    //case 1 = List is Empty
    if(isEmpty())
    {
        cout<<"List is empty . Deletion is not possible"<<endl;
    }
    else if (head==tail)
    {
        DNode *delNode=head;
        head=tail=0;
        cout<<delNode->data<<" is deleted from the List"<<endl;
        delete delNode;
    }
    else
    {
        DNode *delNode=tail;
        tail=tail->prev;
        tail->next=0;
        cout<<delNode->data<<" is deleted from the List"<<endl;
        delete delNode;
    }
}
void DLinkedList::deleteNode(double existing)
{
    //case 1 = List is Empty
    if(isEmpty())
    {
        cout<<"List is empty . Deletion is not possible"<<endl;
    }
    else if (head->data==existing)
    {
        deleteFromHead();
    }
    else if (tail->data==existing)
    {
        deleteFromTail();
    }
    else
    {
        DNode *curr=head->next;
        while(curr!=0&&curr->data!=existing)
        {
            curr=curr->next;
        }
        if(curr==0)
        {
            cout<<"Existing value is not in the List . Deletion failed."<<endl;
        }
        else
        {
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            curr->next=0;//precautionary
            curr->prev=0;//precautionary
            cout<<curr->data<<" is deleted from the List"<<endl;
            delete curr;
        }
    }
}
void DLinkedList::traverseList()
{
    if(isEmpty())
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        DNode *curr=head;
        while(curr!=0)
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }
}
DLinkedList::~DLinkedList()
{
    DNode *delNode = head;
    DNode *nextNode;
    while(delNode!=0)
    {
        nextNode=delNode->next;
        delete delNode;
        delNode=nextNode;
    }


}