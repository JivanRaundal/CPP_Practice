/*Write c program to find out whether the student is pass or fail, if it requires total 40% and atleast 33% in
each subject to pass. Asume 3 subjects and take marks as an input from the user.*/

#include<stdio.h>

int main()
{
	float phy,chem,math,res;
	printf("\nEnter Marks in Chemistry: ");
	scanf("%f", &chem);
	printf("\nEnter Marks in Physics: ");
	scanf("%f", &phy);
	printf("\nEnter Marks in Maths: ");
	scanf("%f", &math);
	
	res=(chem+phy+math)/3;
	if(res>=40 && chem>=33 && phy>=33 && math>=33)
	{
		printf("Your percentage is %f and you are Pass!", res);
	}
	else
	{
		printf("Your percentage is %f but you are Fail!", res);
	}
	return 0;
}
