
#include<stdio.h>

int main()
{
	char mystr[5] = {'R','E','K','H','A'};
	
	int i;
	for(i=0; i<5; i++)
	{
		printf("\n%c----%u",mystr[i], &mystr[i]);
	}
	return 0;
}
