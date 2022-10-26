// Write a c program to calculate sum of n natural numbers

#include<stdio.h>

int sum(int n);

int main()
{
	int num, res;
	printf("Enter the number: ");
	scanf("%d", &num);
	res = sum(num);
	printf("The sum of first %d natural numbers is: %d", num, res);
	
	return 0;
}

int sum(int n)
{
	int s=0;
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum(n-1);
	}
}
