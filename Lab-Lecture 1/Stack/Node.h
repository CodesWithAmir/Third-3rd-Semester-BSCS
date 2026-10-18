#include<iostream>
using namespace std;
class Node
{
	public:
		//data member
		double data; //used to add values
		Node* next;
		Node(double d=0,Node* n=0)
		{
			data=d;
			next=n;
		}
};