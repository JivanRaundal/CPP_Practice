// Q 5]. Scan a string from user and replace every occurence of 'a' and 'A' by 'Z'. (extra pointer method)

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char *p = &str[0];
	cout<<"\nEnter the string : ";
	cin.getline(p,98,'\n');
	cout<<"\nYou entered = "<<p;
	
	int i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)=='A' || *(p+i)=='a')
		{
			*(p+i)='Z';	
		}
		i++;	
	}
	cout<<"\n\nYour string after changes = "<<p;
	return 0;	
} 
