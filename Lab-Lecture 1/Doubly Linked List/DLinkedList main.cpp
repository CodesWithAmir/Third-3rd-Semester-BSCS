#include<iostream>
#include "DNode.h"
#include "DLinked List Header.h"

using namespace std;
//Menu Driven Program for Doubly Linked List
int main()
{
    cout<<"Doubly Linked List Operations"<<endl;
    cout<<"1. Insert at Head"<<endl;
    cout<<"2. Insert at Tail"<<endl;
    cout<<"3. Insert Before a Value"<<endl;
    cout<<"4. Insert After a Value"<<endl;
    cout<<"5. Delete from Head"<<endl;
    cout<<"6. Delete from Tail"<<endl;
    cout<<"7. Delete a Node"<<endl;
    cout<<"8. Traverse List"<<endl;
    cout<<"9. Exit"<<endl;

    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Insert at Head"<<endl;
            break;
        case 2:
            cout<<"Insert at Tail"<<endl;
            break;
        case 3:
            cout<<"Insert Before a Value"<<endl;
            break;
        case 4:
            cout<<"Insert After a Value"<<endl;
            break;
        case 5:
            cout<<"Delete from Head"<<endl;
            break;
        case 6:
            cout<<"Delete from Tail"<<endl;
            break;
        case 7:
            cout<<"Delete a Node"<<endl;
            break;
        case 8:
            cout<<"Traverse List"<<endl;
            break;
        case 9:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
    }
    DLinkedList list;
    list.traverseList();
    return 0;
}