// Program to input length & breadth of rectangle and check whether it is square or not.

#include<iostream>
using namespace std;

int main()
{
	int length,breadth;
	cout<<"\nEnter length & breadth of rectangle: ";
	cin>>length>>breadth;
	
	if(length==breadth)
	{
		cout<<"\nIt is Square";
	}
	else
	{
		cout<<"\nIt is not Square";
	}
	return 0;
}
