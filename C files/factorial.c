// Write a c program for factorial of number.

#include<stdio.h>

int main()
{
	int i=1, num, fact=1;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	/*for(i=1; i<=num; i++)   // using for-loop
	{
		fact=fact*i;
	}*/
	
	while(i<=num)        // using while loop
	{
		fact=fact*i;
		i++;
	}
	
	printf("Factorial Of %d Is: %d",num,fact);
	return 0;
}


