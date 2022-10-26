// Q 3]. Scan a string from user and count number of vowels in the string. (square bracket notation)

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	cout<<"\nYou entered = "<<str;
	
	char vowel[] = "aeiouAEIOU";	//string of vowels
	int i=0, count=0, j;
	while(str[i]!='\0')
	{
		j=0;
		while(vowel[j]!='\0')
		{
			if(str[i]==vowel[j])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	
	/*while(str[i]!='\0')
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||
		   str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
		i++;
	}*/
	cout<<"\n\nTotal number of vowels in string = "<<count;
	return 0;
}
