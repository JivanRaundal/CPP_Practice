/* write a c program to print greatest of four no. input from user.
NOTE: Ternary Operator - It is used to write if-else(conditional) statement in single line.
syntax:   condition/expression? if true expression(if part) : if false expression(else part) 
*/

#include<stdio.h>

int main()
{
	int n1,n2,n3,n4,max;
	
	printf("\nEnter num1: ");
	scanf("%d", &n1);
	printf("\nEnter num2: ");
	scanf("%d", &n2);
	printf("\nEnter num3: ");
	scanf("%d", &n3);
	printf("\nEnter num: ");
	scanf("%d", &n4);
	
	max=(n1>n2 && n1>n3 && n1>n4)?n1:(n2>n3 && n2>n4)?n2:(n3>n4)?n3:n4;  //ternary operator
	
	printf("Greatest of %d,%d,%d and %d is: %d", n1,n2,n3,n4,max);
}
