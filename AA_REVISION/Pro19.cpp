#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream fin("myfile.txt");
	ofstream fout("myfile_2.txt");
	if(fout.fail() || fin.fail())
	{
		cout<<"\nNot Connected";
		exit(5);
	}
	
	char str[30];
	while(fin.eof() == 0)
	{
		fin.getline(str,28,'\n');
		fout<<str<<endl;
	}
	fin.close();
	fout.close();
	return 0;
}
