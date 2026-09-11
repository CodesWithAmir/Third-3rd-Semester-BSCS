#include<iostream>
using namespace std;
int main()
{
	//Date is :08 september 2026
	/*Array declaration depends upon three things 
	1st:
	 its deta type e.g int,loong,boolean String etc 
	2nd:
	 is name of array should be unique as one program can obtain many of names array and functions so that we have to determine a specific name
	 naming rules: name should be start with any letter but can't be start with numbers you can not use any special character 
	 except underscore ( ) you can not use any space in the name of an arry 
	3rd:
	 Decalre the size of array and it should be written in brackets ()
     size of array always start from zero and can not be -ve and should be integer not any other type
       Further Details :
	   you can not save null value in integer data type
	   if we delete any value of array its mean we deleted the value not index of array 
	  
	  hands on exrcise
	  there is no rules at all ke pehliii value ap pehlay index pe hi save krain
	  
	*/
	
	int arr[5];
	arr[2]=14;   //we can randomly add values  from random index
	arr[0]=19;   //we can randomly retrive values  from random index
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value : ";
		cin>>arr[i];
	}
	cout<<"3rd Value in the array = "<<arr[2]<<endl;
	cout<<"1st Value in the array = "<<arr[0]<<endl;
	return 0;
	//"Dont create your programme as developer mind you should create your programme as user" (Professor Muhsin)
	
	
	
}