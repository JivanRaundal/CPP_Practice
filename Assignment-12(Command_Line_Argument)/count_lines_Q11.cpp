// Q 11].	command => count_lines filename.txt
//			command count_lines will count number of lines in file (Note - use string type string)

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc <2 || argc > 2)
	{
		cout<<"\nInvalid argument";
		exit(1);
	}
	
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	ifstream fin(argv[1]);
	if(fin.fail())
	{
		cout<<"\nCannot Connect file";
		exit(2);
	}
	
	string str;
	int count = 0;
	while(fin.eof()==0)
	{
		getline(fin,str);
		count++;
	}
	cout<<"\nTotal Number of Lines in file = "<<count;
	
	fin.close();
	return 0;
}
