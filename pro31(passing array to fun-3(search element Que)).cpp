// Q. scan and print array of 5 integers from user using input_array() & display_array() function.
//    Define another function search() to find element enter by user in array.


#include<iostream>
using namespace std;

void input_array(int *p)
{
	cout<<"\n\nINPUT ARRAY";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>*(p+i);
	}
}

void display_array(int *q)
{
	cout<<"\n\nYOUR ARRAY IS";
	cout<<"\n{ ";
	for(int i=0; i<5; i++)
	{
		cout<<*(q+i)<<", ";
	}
	cout<<"}\n";
}

int search(int *r)
{
	int n;
	int flag=0;
	
	cout<<"\n\nEnter the element you want to search : ";
	cin>>n;
	
	for(int i=0; i<5; i++)
	{
		if(n==*(r+i))
		{
			flag = 1;
			break;
		}
	}
	return flag;
}

int main()
{
	int num[5];
	int ans;
	
	input_array(&num[0]);
	display_array(&num[0]);
	
	ans = search(&num[0]);
	
	if(ans==0)
	{
		cout<<"\n\nElement is not fount in array";
	}
	else
	{
		cout<<"\n\nElement is found in array";
	}
}
