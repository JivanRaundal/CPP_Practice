// Q 11]. Scan 2 string from user and swap them.
// (In this question it is not mentioned to use strcmp(), so declared own copy() fun)

#include<iostream>
using namespace std;

void copy(char *target, char *source)
{
	int i=0;
	while(*(source+i)!='\0')
	{
		*(target+i) = *(source+i);
		i++;
	}
	*(target+i) = '\0';
}

int main()
{
	char str1[100];
	char str2[100];
	char temp[100];	// temp is for swapping.
	cout<<"\nEnter string 1 : ";
	cin.getline(str1,98,'\n');
	cout<<"\nEnter string 2 : ";
	cin.getline(str2,98,'\n');
	
	cout<<"\n\nBEFORE SWAPPING";
	cout<<"\nString 1 = "<<str1;
	cout<<"\nString 2 = "<<str2;
	
	// swap str1 & str2
	copy(temp, str1);	//copy str1 to temp
	copy(str1, str2);	//copy str2 to str1
	copy(str2, temp);	//copy temp to str2
	
	cout<<"\n\nAFTER SWAPPING";
	cout<<"\nString 1 = "<<str1;
	cout<<"\nString 2 = "<<str2;
	
	return 0;
}
