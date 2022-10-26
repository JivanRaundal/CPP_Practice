//		FILE HANDLING
// # fstream class :-
// Note - we can read/write from/to file simultaniously using object of fstream class.
// File opening modes are :-
//	ios::in, ios::out, ios::app, ios::ate, ios::trunc
// Note - object of fstream class can work with both classes functions => tellp(), tellg(), seekp() & seekg()	
// Note - we can use combination of any file opening modes using 'Bitwise Or' |
// Plz refer Notebook notes for theory.

// Q. read/write from/to file simultaniously without using ios::app mode

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream fobj;
	fobj.open("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro329.txt", ios::in | ios::out);
	if(fobj.fail())
	{
		cout<<"\nFile Not Connected";
		exit(1);
	}
	
	char str[100];
	int x;
	
	//writing to file
	cout<<"\nWriting Data\n\n";
	x = fobj.tellp();
	cout<<"\nx = "<<x;
	cout<<"\nEnter Data in File :\n";
	while(1)
	{
		cin.getline(str,98,'\n');
		if(strcmp(str,"STOP")==0)
		{
			break;
		}
		fobj<<str<<endl;
	}
	//without ios::app mode data will be added in
	fobj<<"Thank You!";
	x = fobj.tellp();
	cout<<"\nx = "<<x;
	cout<<"\nFile written Successfully.";
	
	//reading from file
	fobj.seekg(0,ios::beg);
	x = fobj.tellg();
	cout<<"\nx = "<<x;
	
	cout<<"\n\nReading Data\n\n";
	while(fobj.eof()==0)
	{
		fobj.getline(str,98,'\n');
		cout<<str<<endl;
	}
	x = fobj.tellg();
	cout<<"\nx = "<<x;
	cout<<"\nFile Read Successfully.";
	
	fobj.close();
	return 0;
}
