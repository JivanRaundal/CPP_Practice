// Q 11].

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream fout("myfile_Q11.txt");
	if(fout.fail())
	{
		cout<<"\nCannot Connect";
		exit(1);
	}
	
	char str[100];
	static int count=0;
	cout<<"\nKeep Entering Strings & enter STOP to stop scanning :\n";
	while(1)
	{
		cin.getline(str,98);
		if(strcmp(str,"STOP")==0)
		{
			break;
		}
		fout<<str<<endl;
		
		int i=0;
		while(str[i] != '\0')
		{
			i++;		//for string iteration
			count++;	//to calculate number of characters
		}
	}
	cout<<"\n\nTotal Number of Characters in file are = "<<count;
	
	fout.close();
	return 0;
}
