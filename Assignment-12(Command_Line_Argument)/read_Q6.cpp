// Q 6]. 

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc > 2)
	{
		cout<<"\nInvalid arguments";
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
		cout<<"\nCannot Connect File";
		exit(2);
	}
	
	cout<<"\n\nReading File\n\n";
	
	string str;
	while(fin.eof()==0)
	{
		getline(fin,str);
		cout<<str<<endl;
	}
	
	fin.close();
	return 0;
}
