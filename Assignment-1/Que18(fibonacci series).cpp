// 18. WAP to print fibonacci series.

#include<iostream>
using namespace std;

int main()
{
	int num;
	int t1=0,t2=1,t=0;		//t1 = 1st fibo term i.e. 0 & t2 is 2nd fibo term i.e. 1
	
	cout<<"\nEnter the number : ";
	cin>>num;
	
	cout<<"\n\nFIBONACCI SERIES IS : \n";
	for(int i=0; i<=num; i++)
	{
		if(i==0)
		{
			cout<<t1<<" ";
			continue;
		}
		if(i==1)
		{
			cout<<t2<<" ";
			continue;
		}
		else
		{
			t = t1 + t2;
			t1 = t2;
			t2 = t;
			cout<<t<<" ";		
		}
	}
	
	return 0;
}


