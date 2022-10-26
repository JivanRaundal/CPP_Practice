// Q 1]. WAP to create a file in TEXT mode. Write 5 strings in your file.

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream fout("assgn11_Q1.txt");
	if(fout.fail())
	{
		cout<<"\nCannot connect";
		exit(1);
	}
	
	char str[100];
	cout<<"\nEnter 5 strings :\n";
	int i;
	for(i=0; i<5; i++)
	{
		cin.getline(str,98,'\n');
		fout<<str<<endl;
	}
	cout<<"\nSuccessfully written in file";
	
	fout.close();
	return 0;
}
