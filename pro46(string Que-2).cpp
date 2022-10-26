// Q. Scan a string from user and count capital alphabets in string usng pointer.

#include<iostream>
using namespace std;

int main()
{
	char str[30];
	char *p;
	p = &str[0];	//OR p = str;
	
	cout<<"\nEnter string : ";
	cin.getline(p, 28);
	cout<<"\nYou entered : "<<p;
	
	int i=0, count=0;
	while(*(p+i) != '\0')
	{
		if(*(p+i)>='A' && *(p+i)<='Z')
		{
			count++;
		}
		i++;
	}
	cout<<"\n\nTotal capital alphabets in string are : "<<count;
	return 0;
}
