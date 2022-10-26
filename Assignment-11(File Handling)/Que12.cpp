// Q 12].

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream fobj("Data_Q12.txt",ios::in | ios::out | ios::trunc);
	if(fobj.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	char str[100];
	cout<<"\nKeep Entering String & enter STOP to stop :\n";
	while(1)
	{
		cin.getline(str,98,'\n');
		if(strcmp(str,"STOP")==0)
		{
			break;
		}
		fobj<<str<<endl;
	}
	
	fobj.seekg(0,ios::beg);
	
	char ch;
	int count=0;
	while(!fobj.eof())
	{
		fobj.get(ch);
		if(ch==' ')
		{
			count++;
		}
	}
	cout<<"\nTotal Number of spaces in file = "<<count;
	
	fobj.close();
	return 0;
}
