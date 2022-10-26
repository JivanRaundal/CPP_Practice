// Q.12]

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	cout<<"\nEnter String : ";
	cin.getline(str,28,'\n');
	
	int count=0;
	int i=0, j=0;
	int flag=0;
	while(str[i] != '\0')
	{
		if(str[i] != ' ')
		{
			j=0;
			count=0;
			flag=0;
			while(str[j] != '\0')
			{
				if(str[i] == str[j])
				{
					count++;
				}
				if(j<i && count>0)
				{
					flag=1;
					break;
				}
				j++;
			}
			if(flag==0)
			{
				cout<<"\n"<<str[i]<<" occurs "<<count<<" times in string";
			}
		}
		i++;
	}
	
	return 0;
}

