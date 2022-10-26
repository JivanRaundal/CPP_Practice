#include<stdio.h>

int main()
{
	int x;
	
	printf("Enter your Choice , 1.Marathi, 2.English, 3.Hindi\n");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			printf("Marathi");
			break;
			
		case 2:
			printf("English");
			break;
			
		case 3:
			printf("Hindi");
			break;
			
		default:
			printf("Invalid choice!!!");
	}
	printf("\nOut of switch...");
	
	return 0;
}
