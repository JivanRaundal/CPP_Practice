// 			pointer_var = void* malloc(size_of_var);
// Q. scan n weights of students, find the heavy one.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	puts("\nHow many students : ");
	scanf("%d", &n);
	
	float * p;
	p = (float*) malloc(n*sizeof(float));
	
	puts("\n\nEnter weights");
	int i;
	for(i=0; i<n; i++)
	{
		printf("%s %d %s","\nStudent ", i, " : ");
		scanf("%f", (p+i));
	}
	
	float max_wt = *(p+0);
	for(i=0; i<n; i++)
	{
		if(max_wt < *(p+i))
		{
			max_wt = *(p+i);
		}
	}
	printf("%s %f %s","\n\nMaximum weight = ", max_wt, " KG");
	
	free(p);
	return 0;
}
