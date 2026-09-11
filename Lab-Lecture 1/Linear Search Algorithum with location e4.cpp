#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter Size of array : ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter value : ";
		cin>>arr[i];
	}
	int num_search; //number to seach in Array
	cout<<"Enter number to Search ";
	cin>>num_search;
	//Algorithum
	//bool rslt=false;   //Represents search result and can be true or false 
	                  //as searched number exists or not respectively
	  int location=-1;  //as index -ve never exist its means this location is not in memory                
    for (int i=0;i<size;i++)
	{
		if (arr[i]==num_search) //if first value (index 0 value) is equal to num_search
		{
			//rslt=true;
			location=i;
			break;
		}
	}		
	if (location>-1)
	{
		cout<<"Number found at index "<<location<<endl;
	}		   
	else
	{
		cout<<"Number not Found ";
	}
	return 0;
}