// Q 10]. use get() function to read file char by char.
// Note :- get() function is used to read file char by char without skipping spaces(' ') & '\n'.

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
	while(fin.eof()==0)
	{
		//fin>>noskipws>>ch;		Or get() to read char by char without ignoring space
		fin.get(ch);
		cout<<ch;
	}
	
	fin.close();
	return 0;
}
