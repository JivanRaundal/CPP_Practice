// chapter-3 exercise, page_no - 126, Que_no - 1]

#include<iostream>
#include<iomanip>	//for setw()
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter the number : ";
	cin>>n;
	
	int i;
	cout<<"\nMultiples of given number :\n\n";
	for(i=1; i<=100; i++)
	{
		cout<<setw(5)<<n*i<<" ";
		if(i%10==0)
		{
			cout<<"\n";
		}
	}
	return 0;
}
