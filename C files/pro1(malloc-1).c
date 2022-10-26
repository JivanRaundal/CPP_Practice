// 			pointer_var = void* malloc(size_of_var);
// Q. Without declaring any extra variable assgn 10 to int memory.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int * p;
	p = (int*) malloc(sizeof(int));
	*p = 10;
	printf("%s %d","p = ", *p);
	
	free(p);
	return 0;
}
