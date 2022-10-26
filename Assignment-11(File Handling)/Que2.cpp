// Q 2] refer to assgn for Que

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream fout("Essay_Q2.txt");
	if(fout.fail())
	{
		cout<<"\nCannot connect";
		exit(1);
	}
	
	char str[100];
	//writing paragraph
	cout<<"\nWrite a paragraph about college :\n";
	while(1)
	{
		cin.getline(str,98,'\n');
		if(strcmp(str,"END")==0)
		{
			break;
		}
		fout<<str<<endl;
	}
	fout.close();
//---------------------------------------------------------------------------
//reading paragraph
	ifstream fin("Essay_Q2.txt");
	if(fin.fail())
	{
		cout<<"\nCannot Connect";
		exit(2);
	}
	
	cout<<"\n\nParagraph is :\n\n";
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		cout<<str<<endl;
	}
	fin.close();
	
	return 0;
}
