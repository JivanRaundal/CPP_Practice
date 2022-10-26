// scan and print array using its name.
// NOTE:- You cannot do, num = num+1 (error) its not allowed bcz, no any assignment operation is possible 
// on name of array bcz it doesn't have seperate memory like pointers. If you try to do it, compiler generates error.


#include<iostream>
using namespace std;

int main()
{
	//int num[5] = {10,20};  //if size is more and elements are less then default value is 0.
	//int num[2] = {10,20,30,40}; -->error // if size is less and elements are more then error.
	int num[5];
	
	cout<<"\nEnter the elements of array : ";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter value of num["<<i<<"] : ";
		cin>>*(num+i);
	}
	
	cout<<"\n\nYour array is : ";
	
	cout<<"\n{ ";
	for(int i=0; i<5; i++)
	{
		cout<<*(num+i)<<", ";
	}
	cout<<"}\n";
	
	return 0;
}
