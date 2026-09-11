#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of Array: ";
	cin>>size;
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Value : ";
		cin>>arr[i];
	}
	cout<<"Values in the array are ;"; 
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"Value in the array = "<<arr[2]<<endl;
	cout<<"Value in the array = "<<arr[0]<<endl;
	return 0;
}