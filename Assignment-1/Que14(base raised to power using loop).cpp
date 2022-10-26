// 14. Scan base and power from user. Find base raised to power.

#include<iostream>
using namespace std;

int main()
{
	int base, power;
	cout<<"\nEnter base and power : ";
	cin>>base>>power;
	
	int result=1;
	for(int i=0; i<power; i++)
	{
		result = result * base;
	}
	cout<<"\nBase raise to Power is : "<<result;
	return 0;
}
