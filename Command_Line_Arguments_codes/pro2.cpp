// Q. reading file on command prompt

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	cout<<"\nargc = "<<argc<<endl;
	
	ifstream fin(argv[1]);
	if(fin.fail())
	{
		cout<<"\nCannot Connect";
		exit(5);
	}
	
	char str[100];
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		cout<<str<<endl;
	}
	
	fin.close();
	return 0;
}
