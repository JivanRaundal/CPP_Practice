//						PASSING ARRAY TO FUNCTION
// To pass whole array to function, you have to pass its base address to function.
// by observing output of following code you will come to know that array is accessible inside fun().
// we can also change the value of any element of array inside the function.

#include<iostream>
using namespace std;

void my_fun(int *p)
{
	cout<<"\n\nINSIDE MY_FUN()";
	for(int i=0; i<5; i++)
	{
		cout<<"\np+"<<i<<" = "<<(long long)(p+i)<<"\t*(p+"<<i<<") = "<<*(p+i);
	}
}

int main()
{
	int num[5];
	
	cout<<"\nINPUT ARRAY";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter the value of num["<<i<<"] : ";
		cin>>num[i];
	}
	
	cout<<"\n\nINSIDE MAIN()";
	for(int i=0; i<5; i++)
	{
		cout<<"\n&num["<<i<<"] = "<<(long long)&num[i]<<"\t num["<<i<<"] = "<<num[i];
	}
	
	my_fun(&num[0]);
	return 0;
}
