// Write a c program to print fibonacci series using recursion.
// 0 1 1 2 3 5 8 13 .....and so on (fibonacci series)

#include<stdio.h>

int fibonacci_series(int n);   // fibonacci function

int main()
{
	int num, res;
	printf("Enter the Number: ");
	scanf("%d", &num);
	res = fibonacci_series(num);
	printf("Fibonacci Series is: ");
	printf("\n %d", res);
	 
	return 0;
}

int fibonacci_series(int n)
{
	if(n<1)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibonacci_series(n-1) + fibonacci_series(n-2);
	}
}
