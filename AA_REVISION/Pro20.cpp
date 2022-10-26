#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream fin("myfile.txt");
	if(fin.fail())
	{
		cout<<"\nNot Connected";
		exit(5);
	}
	
	char str[30];
	int count=0;
	while(fin.eof() == 0)
	{
		fin.getline(str,28,'\n');
		count++;
	}
	fin.close();
	cout<<"\nCount = "<<count-1;
	return 0;
}
