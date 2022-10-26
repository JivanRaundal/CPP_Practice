// 2-D Array practice example

#include<iostream>
using namespace std;

int main()
{
	int row=0, col=0;
	cout<<"\nEnter the number of rows: ";
	cin>>row;
	cout<<"\nEnter the number of columns: ";
	cin>>col;
	
	int arr[row][col];
	
	cout<<"\nEnter the elements of 2-D array"<<endl;
	
	for(int i=0; i<row; i++) 
	{
		for(int j=0; j<col; j++)
		{
			cout<<"\nEnter the value of arr["<<i+1<<"]["<<j+1<<"] = ";
			cin>>arr[i][j];
		}
	}
	
	cout<<"\n\nRequired 2-D Array is: "<<endl;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<"\nElement at position arr["<<i+1<<"]["<<j+1<<"] is : "<<arr[i][j];
		}
	}
	return 0;
}
