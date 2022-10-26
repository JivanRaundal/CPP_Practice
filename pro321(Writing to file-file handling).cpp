//				FILE HANDLING
// # Writing To file :-

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	//open file in write mode using ofstream class
	ofstream fout("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro321.txt");
	
	//check if file connected to fout or not
	if(fout.fail())
	{
		cout<<"\nFile Not Connected";
		exit(1);
	}
	cout<<"\nFile connected Succesfully";
	
	char str[100];		//to store the string entered by user on console & will write in file
	cout<<"\nKeep Entering Strings :\n";
	while(1)
	{
		cin.getline(str,98,'\n');
		if(strcmp(str,"STOP")==0)
		{
			break;
		}
		// else write string in file using object of ofstream i.e. fout
		fout<<str<<endl;
	}
	
	//close file after all operations
	fout.close();
	return 0;
}

