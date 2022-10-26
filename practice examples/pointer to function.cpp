// Pointer to function :-

#include<iostream>
using namespace std;

int multi(int a,int b)
{
	return a * b;
}

int myfun(int (*ptr)(int ,int ))
{
	cout<<"\nIn myfun() :- ";
	int ans = (*ptr)(2,3);
	return ans;
}

int main()
{
	cout<<"\nAnswer = "<<myfun(&multi);
	return 0;
}
