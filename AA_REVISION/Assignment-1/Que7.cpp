// Q.7]

#include<iostream>
using namespace std;

int addition(int * p)
{
	int i;
	int sum = 0;
	for(i=0; i<8; i++)
	{
		sum += *(p+i);
	}
	return sum;
}

int main()
{
	int num[8] = {1,2,3,4,5,6,7,8};
	
	int ans = addition(num);
	cout<<"\nAddition = "<<ans;
	return 0;
}
