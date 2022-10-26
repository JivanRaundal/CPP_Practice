// Q. Capitalize all letters in string

#include<iostream>
using namespace std;

void capitalize(char *p)
{
	int i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)>=97 && *(p+i)<=122)	//using ASCII value
		//if(*(p+i)>='a' && *(p+i)<='z')
		{
			*(p+i) = *(p+i)-32;
		}
		i++;
	}
	cout<<"\n\nString in capital letters :\n\t"<<p;
}

void small_letter(char *q)
{
	int i=0;
	while(*(q+i)!='\0')
	{
		if(*(q+i)>=65 && *(q+i)<=90)	//using ASCII value
		//if(*(q+i)>='A' && *(q+i)<='Z')
		{
			*(q+i) = *(q+i)+32;
		}
		i++;
	}
	cout<<"\n\nString in small letters :\n\t"<<q;
}

int main()
{
	char str[30];
	cout<<"\nEnter string : ";
	cin.getline(str, 28);
	cout<<"\nYou entered : "<<str;
	
	capitalize(str);
	small_letter(str);
	return 0;
}
