// Q 9.2].	command => exchange file1.txt file2.txt
//			exchange command will exchange content of both files mentioned.

// STNTAX :-
// 1) remove() => remove(file_name_to_remove);
// 2) rename() => rename(old_file_name, new_file_name);

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
	
	// 1] copy file1.txt into temp.txt
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
	
	// 2] now copy file2.txt into file1.txt
	ifstream file2(argv[2]);		//file2.txt opened in read mode
	ofstream _file1(argv[1]);		//file1 opened in write mode
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
	
	// 3] now rename temp.txt by file2.txt & remove file2.txt
	
	//removing file2.txt
	if(remove(argv[2]) != 0)		//remove file2.txt after using
	{
		cout<<"\nfile2.txt is not removed";
	}
	else
	{
		cout<<"\nfile2.txt is removed";
	}
	
	//renaming temp.txt by file2.txt;
	if(rename("temp.txt",argv[2]) != 0)
	{
		cout<<"\nfails to rename";
	}
	else
	{
		cout<<"\nfile renamed successfully";
	}
	
	cout<<"\n\nFiles Exchange Successfully";
	return 0;
}
