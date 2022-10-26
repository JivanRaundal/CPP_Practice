// Q 4] WAP to copy one file into another.
// Note - here we are coping assgn11_Q1.txt into copy_Q4.txt

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	//open assgn11_Q1.txt in read mode
	ifstream fin("assgn11_Q1.txt");
	//open copy_Q4.txt in write mode
	ofstream fout("copy_Q4.txt");
	if(fin.fail() || fout.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	char str[100];
	
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		fout<<str<<endl;
	}
	cout<<"\nFile copied Succesfully";
	
	fin.close();
	fout.close();
	return 0;
}
