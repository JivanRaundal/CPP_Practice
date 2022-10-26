// Q 14]. Keep scanning strings from user until user enters STOP. print length of each string.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char s[5] = "STOP";

	cout<<"\n\nEnter the strings & type [STOP] for exit.";
	int x,i;
	bool t = true;
	while(t)
	{
		cout<<"\n\nEnter string : ";
		cin.getline(str,98,'\n');
		x = strcmp(str,s);
		if(x==0)
		{
			t = false;
		}
		else
		{
			i=0;
			while(str[i]!='\0')
			{
				i++;
			}
			cout<<"\nLength of ("<<str<<") is = "<<i;
			cout<<"\n---------------------------------------";
		}
	}
	cout<<"\n\nYou are exited...";
	return 0;
}
