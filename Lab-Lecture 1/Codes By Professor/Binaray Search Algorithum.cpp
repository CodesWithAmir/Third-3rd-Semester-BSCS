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
	//bool rslt=false;   //Represents search result and can be true or false 
	                  //as searched number exists or not respectively
	  int location=-1;  //as index -ve never exist its means this location is not in memory
	  int start =0;
	  int end=size-1;
	                  
    while (start<=end)
	{
		int mid=(start+end)/2;
		
		if (arr[mid]==num_search) //if first value (index 0 value) is equal to num_search
		{
			//rslt=true;
			location=mid;
			break;
		}
	    if (arr[mid]>num_search)
	{
	
	}		   
	else //elseif(arr[mid]<num_search
	{
		start = mid +1;
	}
    }//while end
    	cout<<"Number found at index "<<location<<endl;
	return 0;
}
