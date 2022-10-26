#include<stdio.h>

int main()
{
	char mystr[10] = {3,4,4,4,4,4,4,4,4,4};
	mystr[0] = 'A';
	mystr[1] = 'B';
	mystr[2] = 'C';
	mystr[3] = 'D';
	
	char str1[] = "My name is Jivan";
	printf("\nstr1 = %s", str1);
	
	printf("\nstring1 = %s", &mystr[0]);
	mystr[4] = '\0';
	printf("\nstring2 = %s", &mystr[0]);
	
	char str2[10];
	
	puts("\nEnter the string : ");
	//scanf("%s", &str2[0]);
	gets(str2);
	
	printf("\nString3 is : %s", str2);

	
	return 0;
}
