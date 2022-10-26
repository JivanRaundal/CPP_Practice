// Q 4]. Scan a string from user and count number of digit in string. (extra pointer method)

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char *p = str;
	cout<<"\nEnter the string : ";
	cin.getline(p,98,'\n');
	cout<<"\nYou entered = "<<p;
	
	char num[] = "0123456789";	//array of digits
	char *q = num;
	
	int i=0, count=0, j;
	while(*(p+i)!='\0')
	{
		j=0;
		while(*(q+j)!='\0')
		{
			if(*(p+i)==*(q+j))
			{
				count++;
			}
			j++;
		}
		i++;
	}
	cout<<"\n\nTotal number of digits in string = "<<count;
	return 0;
}
