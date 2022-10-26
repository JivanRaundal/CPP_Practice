#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream fout("D:\\A_REGAL_CLASSES\\CPP_class\\AA_REVISION\\myfile.txt");
	char str[30];
	cout<<"\nKeep Entering String & enter STOP to stop :\n";
	do
	{
		cin.getline(str,28,'\n');
		fout<<str<<endl;
	}while(strcmp(str,"STOP") != 0);
	fout.close();
	
	cout<<"\n\nNow reading from file\n";
	ifstream fin("D:\\A_REGAL_CLASSES\\CPP_class\\AA_REVISION\\myfile.txt");
	while(fin.eof() == 0)
	{
		fin.getline(str,28,'\n');
		cout<<str<<endl;
	}
	fin.close();
	return 0;
}
