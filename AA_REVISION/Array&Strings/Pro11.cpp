//check if string is pallindrome or not

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50];
	cout<<"\nEnter String : ";
	cin.getline(str,48,'\n');
	int i=0;
	int j=strlen(str)-1;
	
	while(i <= j)
	{
		if(str[i] != str[j])
		{
			break;
		}
		i++;
		j--;
	}
	if(i > j)
	{
		cout<<"\nPallindrome";
	}
	else
	{
		cout<<"\nNot Pallindrome";
	}
	return 0;
}
