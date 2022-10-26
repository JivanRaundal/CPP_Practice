// Q 5].	command => concat file1.txt file2.txt 
// 			concat command will write all the contents of file2.txt in file1.txt after previous content in file1.txt.

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc < 3 || argc > 3)
	{
		cout<<"\nInvalid arguments";
		exit(1);
	}
	
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	fstream fin(argv[2],ios::in);	//file2.txt in read mode
	fstream fout(argv[1],ios::out | ios::app);	//file1.txt in write mode
	if(fin.fail() || fout.fail())
	{
		cout<<"\nCannot connect files";
	}
	
	char str[100];
	//fout.seekp(0);		//move put pointer at the end to add new content from end of file
	
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		fout<<str<<endl;
	}
	
	cout<<"\nFile Concatenated Successfully";
	fin.close();
	fout.close();
	return 0;
}
