//				FILE HANDLING
// # Reading from file :-
// Note - To read data from file we have to connect that file with the object of ifstream class.
// STYNTAX :- ifstream fin("file_path_here"); -> It automatically opens the file in ios::in mode. i.e. in read mode.
// Note - plz refer to notebook notes for theory notes

// # Scanning/Reading One Line(Whole String) at a time from file :-

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	//open file in read mode using ifstream class
	ifstream fin("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro321.txt");
	//check if file connected to fin or not
	if(fin.fail())
	{
		cout<<"\nFile Not Connected";
		exit(1);
	}
	cout<<"\nFile Connected Successfully";
	
	char str[100];	//to store the string coming from file in program
	//scanning string from file using fin.getline()
	fin.getline(str,98,'\n');
	//printing string read from file on console
	cout<<"\nString = "<<str;
	
	fin.getline(str,98,'\n');
	cout<<"\nString = "<<str;
	
	//close file after all operations
	fin.close();
	return 0;
}
