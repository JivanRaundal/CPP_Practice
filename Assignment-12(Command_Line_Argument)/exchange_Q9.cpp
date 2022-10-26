// Q 9.1].	command => exchange file1.txt file2.txt
//			exchange command will exchange content of both files mentioned.

#include<iostream>
#include<fstream>
#include<cstdio>	//header file for remove() & rename() functions 
using namespace std;

int main(int argc,char *argv[])
{
	cout<<"\nargc = "<<argc<<endl;
	for(int i=0; i<argc; i++)
	{
		cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
	}
	
	ofstream fout("temp.txt");		// first temp.txt is opened in write mode 
	ifstream file1(argv[1]);	//file1.txt is opened in read mode
	if(fout.fail() || file1.fail())
	{
		cout<<"\ncannot Connect file";
		exit(1);	
	}
	
	char str[100];
	while(file1.eof()==0)
	{
		file1.getline(str,98,'\n');	//read from file1.txt
		fout<<str<<endl;			//write into temp.txt
	}
	file1.close();	//close file1 after reading
	fout.close();	//close temp.txt after writing

	ofstream _file1(argv[1]);	//file1.txt is now open in write mode
	ifstream file2(argv[2]);	//file2.txt is opened in read mode
	if(_file1.fail() || file2.fail())
	{
		cout<<"\nCannot Connect file";
		exit(2);
	}
	
	while(file2.eof()==0)
	{
		file2.getline(str,98,'\n');		//read from file2.txt
		_file1<<str<<endl;				//write into file1.txt
	}
	
	_file1.close();	//close file1 after writing
	file2.close();	//close file2 after reading
	
	ifstream fin("temp.txt");	//open temp.txt again in read mode to copy it's content in file2.txt
	ofstream _file2(argv[2]);	//open file2 again in write mode
	if(fin.fail() || _file2.fail())
	{
		cout<<"\nCannot Connect file";
		exit(3);
	}
	
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		_file2<<str<<endl;
	}
	
	_file2.close();	//close file2 after writing
	fin.close();	//close temp.txt after reading
	
	if(remove("temp.txt") != 0)		//remove temp.txt after usage
	{
		cout<<"\ntemp.txt is not removed";
	}
	else
	{
		cout<<"\ntemp.txt is removed";
	}
	
	cout<<"\nFiles Exchange Successfully";
	return 0;
}
