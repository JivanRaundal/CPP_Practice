// Q.4]

#include<iostream>
#include<string.h>
using namespace std;

char* create()
{
	char str[100];
	cout<<"\nEnter String : ";
	cin.getline(str,98,'\n');
	int len = strlen(str);
	char * p = new char[len+1];
	strcpy(p,str);
	return p;
}

int main()
{
	char * str = create();
	cout<<"\nString = "<<str;
	
	int i=0, count=0;
	while(*(str+i) != '\0')
	{
		if(*(str+i)>=48 && *(str+i)<=57)
		{
			count++;
		}
		i++;
	}
	cout<<"\nTotal digits = "<<count;
	return 0;
}
