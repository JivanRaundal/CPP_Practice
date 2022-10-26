// Q.3]

#include<iostream>
using namespace std;

int isVowels(char x)
{
	char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
	for(int i=0; i<10; i++)
	{
		if(vowels[i] == x)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char str[30];
	cout<<"\nEnter String : ";
	cin.getline(str,28,'\n');
	cout<<"\nString = "<<str;
	
	int count=0;
	int i=0;
	
	while(str[i] != '\0')
	{
		if(isVowels(str[i]))
		{
			count++;
		}
		i++;
	}
	cout<<"\n\nTotal Vowels = "<<count;
	return 0;
}
