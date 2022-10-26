// Q 5]. WAP to count number of words in file.

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream fin("Test.txt");
	if(fin.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	char ch;
	int count = 0;
	while(!fin.eof())
	{
		//fin>>noskipws>>ch;		Or get()
		fin.get(ch);
		if(ch==' ' || ch=='\n')
		{
			count++;
		}
	}
	cout<<"\nTotal words in file are = "<<count+1;
	
	fin.close();
	return 0;
}
