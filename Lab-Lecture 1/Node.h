#include<iostream>
using namespace std;
class Node
{
	public:
		double data;
		Node* next;
		Node(double d=0,Node* n=0)
		{
			data=d;
			next=n;
		}
};