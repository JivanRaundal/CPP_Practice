// Q.5]

#include<iostream>
using namespace std;

int main()
{
	char str[30];
	cout<<"\nEnter String : ";
	cin.getline(str,28,'\n');
	
	int i=0;
	while(str[i] != '\0')
	{
		if(str[i]=='a' || str[i]=='A')
		{
			str[i] = 'Z';
		}
		i++;
	}
	cout<<"\nAfter String = "<<str;
	return 0;
}
