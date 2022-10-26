//				FILE HANDLING
// # Reading from file :-
// Note - To read data from file we have to connect that file with the object of ifstream class.
// STYNTAX :- ifstream fin("file_path_here"); -> It automatically opens the file in ios::in mode. i.e. in read mode.
// Note - plz refer to notebook notes for theory notes

// # Scanning/Reading whole file at a time using eof() (end of file function) :-
// Note = eof() - It is member function of ifstream class hence accessed like fin.eof(); 
//                It returns 1 if file is reached to end, else returns 0
//                It does not read '\n' Or endl i.e. new line characters

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
	cout<<"\nFile Connected Successfully\n\n";
	
	char str[100];	//to store the string coming from file in program
	//scanning whole file using eof() & fin.getline() in while loop
	while(fin.eof()==0)
	{

		fin.getline(str,98,'\n');
		//printing string read from file on console
		cout<<str<<endl;	//we have to explicitly mentioned '\n' or endl bcz eof() does not read new line
	}
	
	//close file after all operations
	fin.close();
	return 0;
}
