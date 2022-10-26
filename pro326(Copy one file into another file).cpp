//			FILE HANDLING
// Q. WAP to copy one file into another

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	//file in which content is to be copied is opend in ios::out (write) mode using ofstream class
	ofstream fout("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro326.txt");
	//file whose content is to be copied is opend in ios::in (read) mode using ifstream class
	ifstream fin("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro325.txt");
	
	//check if files connected successfully or not
	if(fout.fail() || fin.fail())
	{
		cout<<"\nCannot Connect Files";
		exit(1);
	}
	
	char str[100];	//to store contents from pro325.txt & write that content in pro326.txt
	
	while(fin.eof()==0)
	{
		fin.getline(str,98,'\n');
		fout<<str<<endl;
	}
	
	cout<<"\nFile Copied Successfully...!";
	
	//close files
	fout.close();
	fin.close();
	return 0;
}
