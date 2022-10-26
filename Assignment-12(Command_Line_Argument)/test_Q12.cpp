
#include<iostream>
#include<string.h>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	fstream fobj("test.txt", ios::in | ios::out);
	if(fobj.fail())
	{
		cout<<"\nCannot connect file";
		exit(1);
	}
	
	int ind;
	string str;
	string sub_str = "java";
	while(fobj.eof()==0)
	{
		getline(fobj,str);
		//cout<<str<<endl;
		//fobj.seekg(-(str.length()),ios::cur);
		
		while((ind = str.find("cpp")) != string::npos)
		{
			str.replace(ind,sub_str.length(),sub_str);
		}
		cout<<str<<endl;
		//fobj<<str<<endl;
	}
}
