// Q 2]. command => copyfile_Q2 target.txt source.txt 

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc > 3)
	{
		cout<<"\nInvalid arguments";
		exit(1);
	}
	
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	ofstream fout(argv[1]);		//target.txt in write mode
	ifstream fin(argv[2]);		//source.txt in read mode
	if(fin.fail() || fout.fail())
	{
		cout<<"\nCannot Connect File";
		exit(2);
	}
	
	char str[100];
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		fout<<str<<endl;
	}
	cout<<"\nFile Copied SUccessfully";
	
	fin.close();
	fout.close();
	return 0;
}
