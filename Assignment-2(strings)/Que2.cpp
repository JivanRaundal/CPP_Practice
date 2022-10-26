// Q 2]. scan a string from user and count number of words. (extra pointer method)

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char *p = str;
	cout<<"\nEnter the string : ";
	cin.getline(p,98,'\n');
	cout<<"\nYou entered = "<<p;
	
	int i=0, count=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i) == ' ')
		{
			count++;
		}
		i++;
	}
	cout<<"\n\nTotal number of words in string = "<<count+1;
	return 0;
}
