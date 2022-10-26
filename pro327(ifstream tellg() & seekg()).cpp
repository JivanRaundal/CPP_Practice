//			FILE HANDLING
// # ifstream member functions :- tellg() & seekg()
// Note - Plz refer to Notebook notes for theory.
// eg-

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream fin("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro326.txt");
	if(fin.fail())
	{
		cout<<"\nFile Not Connected";
		exit(1);
	}
	
	char str[100];
	int x;
	
	x = fin.tellg();
	cout<<"\nx = "<<x;	//0
	fin>>str;
	cout<<"\nstr1 = "<<str;
	
	x = fin.tellg();
	cout<<"\nx = "<<x;	
	fin>>str;
	cout<<"\nstr2 = "<<str;
	
	x = fin.tellg();
	cout<<"\nx = "<<x;
	
	//fin.seekg(offset, direction); direction can be - ios::beg, ios::cur, ios::end
	fin.seekg(0,ios::beg);
	x = fin.tellg();
	cout<<"\nx = "<<x;
	fin>>str;
	cout<<"\nstr3 = "<<str;
	
	fin.seekg(-8,ios::end);
	x = fin.tellg();
	cout<<"\nx = "<<x;
	fin>>str;
	cout<<"\nstr4 = "<<str;
	
	x = fin.tellg();
	cout<<"\nx = "<<x;
	fin.clear();	//fin.clear() will move file pointer at the end of file
	x = fin.tellg();
	cout<<"\nx = "<<x;
	
	fin.close();
	return 0;
}
