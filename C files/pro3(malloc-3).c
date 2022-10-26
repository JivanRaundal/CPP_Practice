// 			pointer_var = void* malloc(size_of_var);
// Q. scan n integers from user using for loop & print their addition using while loop.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	puts("How many values ? ");
	scanf("%d",&n);
	
	int * p;
	p = (int*) malloc(n*sizeof(int));
	
	puts("\nEnter values");
	int i;
	for(i=0; i<n; i++)
	{
		printf("%s %d %s","\nElement ", i, " : ");
		scanf("%d", (p+i));
	}
	
	i = 0;
	int sum = 0;
	while(i != n)
	{
		sum = sum + *(p+i);
		i++;
	}
	printf("%s %d","\n\nAddition = ", sum);
	
	free(p);
	return 0;
}
