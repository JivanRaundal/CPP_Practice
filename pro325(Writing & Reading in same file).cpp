//		FILE HANDLNG
// # Reading & Writing Data in same file, Is it possible..? 
// Note - One file can work with only one object at a time.
// Hence, In this cose, we will first write into file & then will read from file.

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
	//________________WRITING_TO_FILE________________
	
	cout<<"\n\nWriting in File\n";
	ofstream fout("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro325.txt");
	if(fout.fail())
	{
		cout<<"\nFile Not Connected";
		exit(1);
	}
	
	char str1[100];
	cout<<"\nKeep Entering Content to be write in file & enter STOP if want to stop writing :\n\n";
	while(1)
	{
		cin.getline(str1,98,'\n');
		if(strcmp(str1,"STOP")==0)
		{
			break;
		}
		//else write string in file
		fout<<str1<<endl;
	}
	
	//close file after writing
	fout.close();	//Reason - One file can work with only one file object at a time
	
	
	//____________________READING_FROM_FILE____________________
	
	cout<<"\n\nReading File\n\n";
	ifstream fin("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\pro325.txt");
	if(fin.fail())
	{
		cout<<"\nFile Not Connected";
		exit(1);
	}
	
	char str2[100];	//to store string from file & prit on console
	
	while(fin.eof()==0)
	{
		fin.getline(str2,98,'\n');
		cout<<str2<<endl;		//eof() does not read new line hence endl is mentioned
	}
	//close file after reading
	fin.close();	//Reason - One file can work with only one file object at a time
	
	return 0;
}
