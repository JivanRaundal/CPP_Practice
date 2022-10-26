//			FILE HANDLING
// # ofstream member functions :- tellp() & seekp()
// Note - Plz refer to Notebook notes for theory.
// eg-

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream fout("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro328.txt");
	if(fout.fail())
	{
		cout<<"\nFile Not Connected";
		exit(1);
	}
	
	char str[100];
	int x;
	
	x = fout.tellp();
	cout<<"\nx = "<<x;	//0
	cout<<"\nEnter string : ";
	cin>>str;
	fout<<str;
	
	x = fout.tellp();
	cout<<"\nx = "<<x;
	cout<<"\nEnter string : ";	
	cin>>str;
	fout<<str;
	
	x = fout.tellp();
	cout<<"\nx = "<<x;
	
	//fout.seekp(offset, direction); direction can be - ios::beg, ios::cur, ios::end
	fout.seekp(0,ios::beg);
	x = fout.tellp();
	cout<<"\nx = "<<x;
	cout<<"\nEnter string : ";
	cin>>str;
	fout<<str;
	
	fout.seekp(-8,ios::end);
	x = fout.tellp();
	cout<<"\nx = "<<x;
	cout<<"\nEnter string : ";
	cin>>str;
	fout<<str;
	
	x = fout.tellp();
	cout<<"\nx = "<<x;
	fout.clear();	//fin.clear() will move file pointer at the end of file
	x = fout.tellp();
	cout<<"\nx = "<<x;
	
	fout.close();
	return 0;
}
