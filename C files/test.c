#include<stdio.h>
#include<math.h>

int main()
{
	printf("Hello Jivan, Welcome to C programming!\n\n");
	int a,b;
	printf("Enter Value of a:\n");
	scanf("%d", &a);
	
	printf("Enter Valude of b: \n");
	scanf("%d", &b);
	
	printf("Addition of a and b is: %d \n",a+b);
	printf("Substraction of a and b is: %d \n",a-b);
	
	// value of a to the power b (a^b) in c is obtained by following method
	printf("Value of a to the power b (a^b) is: %fb \n", pow(a,b));  // pow() always returns float value (%f) and math.h is for pow()
	
	printf("value of a/b is: %d \n", a/b); // if a & b are int type then a/b will always be int type
	getch();
	return 0;
}

