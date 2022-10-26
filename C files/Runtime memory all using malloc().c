//	MALLOC IN C
// # malloc() :- malloc() function is used for Runtime Memory Allocation.
// Create array of n integers scan it's values & print it.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("WELCOME\n");
	int n;
	puts("How Many int array you want to create..? ");
	scanf("%d",&n);
	
	int *p;	//pointer to int
	//allocating runtime memory using malloc()
	p = (int*) malloc(n*sizeof(int));		//4/8 bytes for 1 int var
	
	int i;
	printf("%s","\nScanning Array : ");
	for(i=0; i<n; i++)
	{
		printf("%s%d%s","\nEnter Element ",i," : ");
		scanf("%d",p+i);
	}
	
	printf("%s","\n\nPrinting Array :\n");
	for(i=0; i<n; i++)
	{
		printf("%s%d"," ",*(p+i));
	}
	
	//free runtime memory using free()
	free(p);
	return 0;
}
