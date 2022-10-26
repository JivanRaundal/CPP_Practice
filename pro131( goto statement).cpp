//			GOTO STATEMENT
// 1] goto is jump statement which is sometimes also refered to as unconditional jump statement.
// 2] The goto statement can be used to jump from anywhere to anywhere within a function.
// 3] It has 2 syntax:-
//    1)  goto label:       2) label:
//        .					   .
//        .					   .
//        label: 			   goto label;

// example 1st syntax:-

#include<iostream>
using namespace std;

void even_odd(int num)
{
	if(num%2==0)
	{
		goto even;	//goto label;
	}
	else
	{
		goto odd;
	}
	
	even:
		cout<<"\n"<<num<<" is even.";
		return;	//return if even
	odd:
		cout<<"\n"<<num<<" is odd.";
		return;	//return if odd
}
int main()
{
	int n;
	cout<<"\nEnter number : ";
	cin>>n;
	even_odd(n);
	return 0;
}
