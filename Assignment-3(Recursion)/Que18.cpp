// Q 18]. Keep scanning a character from user recursively until user enters '?'. Count the number of upper case 
//        characters user entered.

#include<iostream>
using namespace std;

//int count = 0;	//global var
void scan()
{
	char ch;
	static int count = 0;
	cout<<"\n\nEnter the character : ";
	cin>>ch;
	cout<<"\nCharacter = "<<ch;
	if(ch=='?')
	{
		cout<<"\nNumber of uppercase characters user entered are : "<<count;
		return;
	}
	else
	{
		if(ch>='A' && ch<='Z')
		{
			count++;
		}
		scan();
	}
}

int main()
{
	scan();
	return 0;
}
