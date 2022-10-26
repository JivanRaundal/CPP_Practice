// 			pointer_var = void* malloc(size_of_var);
// Q. Without declaring any extra variable, scan 2 int values & print them.
// Note - scanf() needs address of memory where you will store user input.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int * p;
	p = (int*) malloc(2*sizeof(int));
	
	printf("Enter values :\n");
	scanf("%d %d",(p+0),(p+1));
	
	printf("%s %d %s %d", "\nTwo values are = ", *(p+0), " & ", *(p+1));
	
	free(p);
	return 0;
}
