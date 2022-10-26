// Q. Write a cpp code to copy one file into another file using command => '_copy source.txt target.txt'

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	cout<<"\nargc = "<<argc;
	cout<<"\n0th argument = "<<argv[0];
	cout<<"\n1st argument = "<<argv[1];
	cout<<"\n2nd argument = "<<argv[2]<<endl;
	
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	if(fin.fail() || fout.fail())
	{
		cout<<"\nCannot Connect";
		exit(5);
	}
	
	char str[100];
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		fout<<str<<endl;
	}
	
	cout<<"\n\nFile copied Successfully";
	fin.close();
	fout.close();
	return 0;
}

