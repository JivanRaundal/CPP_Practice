// Q 12]. Scan a string from user. count how many times each alphabet occurs in string.

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"\nEnter the string : ";
	cin.getline(str,98,'\n');
	cout<<"\nString = "<<str;

	cout<<"\n\nOCCURENCE OF EACH ALPHABET";
	int count=0, j, flag;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]!=' ')	//to avoid space(' ') bcz it is not alphabet.
		{
			flag=0;
			count=0;
			j=0;
			while(str[j]!='\0')
			{
				if(str[i]==str[j])
				{
					
					count++;
				}
				if(j<i && count>0)
				{
					flag=1;	//to skip printing repeated element
					break;
				}
				j++;
			}
			if(flag==0)
			{
				cout<<"\n"<<str[i]<<" occurs "<<count<<" times in string.";
			}
		}
		i++;
	}
	return 0;
}
