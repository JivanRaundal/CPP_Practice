#include<stdio.h>

int main()
{
	int i=4;
	int* j=&i;   //int* is pointer to integer
	
	printf("\nValue of i is: %d",i);
	printf("\nAddress of i is: %u",&i);
	printf("\nvalue of i is: %d",*j);
	printf("\nAddress of i is: %u",j);
	printf("\nAddress of j is: %u",&j);
	printf("\nvalue of j is: %u",*(&j));
	printf("\nValue of i is: %u", *(&i));
	
	int** k=&j;   //pointer to pointer
	printf("\n\nValue of i is: %u", **k);
	printf("\nAdress of j is: %d", k);
	printf("\nvalue of j is: %u", *k);
	printf("\nValue of k is: %u", *(&k));
	printf("\nAddress of k is: %u",&k);
	
	return 0;
}
