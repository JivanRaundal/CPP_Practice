// Q 1]. WAP to count Number of lines in file.

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream fout("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\myfile2.txt");
	if(fout.fail())
	{
		cout<<"\nCan't connect file";
		exit(1);
	}

	char str1[100];
	cout<<"\nKeep Entering String :\n";
	while(1)
	{
		cin.getline(str1,98,'\n');
		if(strcmp(str1,"STOP")==0)
		{
			break;
		}
		fout<<str1<<endl;	//write string to file
	}
	fout.close();	//Reason - Bcz one file can work with only one object at a time.
	
	//--------------------------------------------------------------------
	cout<<"\n\n";
	ifstream fin("C:\\Users\\Jivan\\OneDrive\\Desktop\\cpp class\\file_handling_txt\\myfile2.txt");
	if(fin.fail())
	{
		cout<<"\nCan't connect file";
		exit(1);
	}
	
	char str2[100];		//to store string from file
	int count = 0;
	while(fin.eof()==0)
	{
		fin.getline(str2,98);
		cout<<str2<<endl;
		count++;
	}
	cout<<"\nTotal Number of lines in file = "<<count-1;
	fin.close();
	
	return 0;
}
