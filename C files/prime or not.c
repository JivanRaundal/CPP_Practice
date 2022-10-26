// Prime or not(composite)
// prime no. is no. which is either divisible by 1 or by itself only.
// NOTE: Only 2 is even Prime no. which is divisible by 1 & 2 itself.

#include<stdio.h>

int main()
{
	int i, num, prime=0;
	printf("Enter The Number: ");
	scanf("%d", &num);
	
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			prime=1;
			break;
		}
	}
	if(prime==1)
	{
    	printf("%d is not Prime Number / Composite Number", num);
	}
	else
	{
		printf("%d is Prime Number", num);
	}
}
