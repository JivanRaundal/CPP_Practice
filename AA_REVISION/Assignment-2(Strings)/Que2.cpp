// Q.2]

#include<iostream>
using namespace std;

int main()
{
	char str[50];
	cout<<"\nEnter String : ";
	cin.getline(str,48,'\n');
	cout<<"\nString = "<<str;
	
	char * p = str;
	int i=0, count=0;
	while(*(p+i) != '\0')
	{
		if(*(p+i) == ' ')
		{
			count++;
		}
		i++;
	}
	cout<<"\nTotal words in string are = "<<count+1;
	return 0;
}
