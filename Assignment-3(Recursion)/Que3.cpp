// Q 3]. Scan a range from user. print all the integers in the range recursively.
//		 User may enter range with smaller number first or greater number first.

#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x==y+1)	//or if(x>y)
	{
		return;
	}
	else
	{
		cout<<"\n"<<x;
		print(x+1,y);
	}
}

int main()
{
	int a,b;
	cout<<"\nEnter the range : ";
	cin>>a>>b;
	if(a<b)
	{
		print(a,b);
	}
	else
	{
		print(b,a);
	}
	return 0;
}
